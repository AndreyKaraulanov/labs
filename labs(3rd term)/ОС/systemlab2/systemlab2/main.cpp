#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <fstream>
#include <vector>
#include <filesystem>


using namespace std;
ifstream fin;

void get(vector<string>& paths, const string& path_of_file)
{
    for (const auto& file : filesystem::directory_iterator(path_of_file))
    {
        if (filesystem::is_directory(file))
        {
            get(paths, file.path().string());
        }
        else
        {
            paths.push_back(file.path().string());
        }
    }
}

int Boyer(char* txt, char* pat)
{
    int d[256];
    int i, j, k, N, M;
    N = strlen(txt);
    M = strlen(pat);
    for (i = 0; i < 256; i++) {
        d[i] = M;
    }
    for (i = 0; i < M-1; i++) {
        d[(unsigned char) pat[i]] = M-i-1;
    }
    i = M-1;
    do{
        j = M - 1;
        k = i;
        while ((j>=0) && (pat[j] == txt[k])) {
            k--; j--;
        }
        if (j<0)
            return k+1;
        i+=d[(unsigned)txt[i]];
    }while(i < N);
    return -1;
}

void Check(const char* path) {
    fin.open(path);
    char* block;
    int iter = 40;
    char virus[] = "Петя";
    int size = strlen(virus);
    char* sub_virus = new char[size];
    bool virus1 = false, virus2 = false;
    int idx = 0;
    int block_index = 1;
    while (!fin.eof()) {
        block = new char[iter];
        fin.read(block, iter);
        if (block_index % 2 != 0) {
            idx = 0;
            for (int i = iter - 10; i < iter; i++)
            {
                sub_virus[idx] = block[i];
                idx++;
            }

        }
        else
        {
            idx = 10;
            for (int i = 0; i < 10; i++)
            {
                sub_virus[idx] = block[i];

                idx++;
            }
        }
        block_index++;
        virus1 = Boyer(block, virus);
        virus2 = Boyer(sub_virus, virus);
        delete[] block;
        if (virus1 || virus2)break;
    }
    if (virus1 or virus2) {
        cout << "Вирус обнаружен!\n";
    }
    else cout << endl;
    delete[] sub_virus;
    sub_virus = nullptr;
    fin.close();
}

int main(int argc, char** argv) {

    for (int i = 0; i < argc; i++) {
        cout << argv[i] << endl;
    }

    const char path[] = { "D:\\..." };
    vector<string> paths;
    get(paths, path);
    int size = paths.size();

    for (int i = 0; i < size; i++) {
        const char* fileName = paths[i].c_str();
        cout << "Путь к файлу: " << fileName;
        Check(fileName);
    }
    system("pause");
    return 0;
}
