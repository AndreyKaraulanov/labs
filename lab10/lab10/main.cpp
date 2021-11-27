#include <iostream>
using namespace std;
#define N 3
#define M 3

void Fun(int mas[]);

int main()
{

    int mas1[N * M] = { 4, 9, 8, 6, 4, 8, 5, 3, 2 };

    
    cout << "Вихідний одновимірний масив: " << endl;
    for (int i = 0; i < N * M; i++)
        cout << mas1[i] << " ";
    cout << endl;

    
    Fun(mas1);

    
    cout << "Одновимірний масив після функції: ";
    cout << endl;
    for (int i = 0; i < N * M; i++)
        cout << mas1[i] << " ";
    cout << endl;

    system("pause");
    return 0;
}

void Fun(int mas[])
{
    int mas2[N][M];
    cout << "Двовимірний з одновимірного:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            mas2[i][j] = mas[i * M + j];
            cout << mas2[i][j] << " ";
        }
        cout << endl;
    }

    
    int t;
    for (int i = 0; i < N / 2; i++)
    {
        for (int j = 0; j < M; j++)
        {
            t = mas2[i][j];
            mas2[i][j] = mas2[N - 1 - i][j];
            mas2[N - 1 - i][j] = t;
        }
    }

    
    cout << "Двовимірний масив після ";
    cout << "дзеркального відображення : " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << mas2[i][j] << " ";
        }
        cout << endl;
    }

    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            mas[i * M + j] = mas2[i][j];
        }
    }
}
