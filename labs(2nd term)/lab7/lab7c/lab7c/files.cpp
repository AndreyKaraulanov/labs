#include "files.hpp"
void Function(int number) {
    FILE* f;
    //fstream fout;
    int a, b, c,k;
    int min = 100;
    f = fopen("f.txt", "wb");
    
        cout << "Элементы: " << endl;
        for (int i = 0; i < M; i++)
        {
            number = rand() % 20 + 1;
            
            cout << number << " " ;
            if (min>number) {
                min = number;
                k = i;
            }
            fwrite(&number, sizeof(int), 1, f);
            //fprintf(%d, number);
        
    }
    fclose(f);

    cout << endl;
    f = fopen("f.txt", "rb");
    
    fseek(f, 1*sizeof(int), SEEK_SET);
    fread(&a, sizeof(int), 1, f);
    
    cout << "2 элемент:" << a<<endl;
    fclose(f);
    f = fopen("f.txt", "rb");
    
    fseek(f, 4 * sizeof(int), SEEK_SET);
    fread(&b, sizeof(int), 1, f);
    
    cout << "5 элемент:" << b << endl;
    fclose(f);
    f = fopen("f.txt", "rb");
    
    fseek(f, 8 * sizeof(int), SEEK_SET);
    fread(&c, sizeof(int), 1, f);
    
    cout << "9 элемент:" << c << endl;
    int sum = a + b + c;
    cout << "Сумма:" << sum << endl;
    fclose(f);
    cout << "Минимальный элемент:" << min << endl;
    //fwrite(&min, sizeof(int), 1, f);
    f = fopen("f.txt", "rb");
    
        

    for (int i = 0; i < M; i++)
    {
            
        fread(&number, sizeof(int), 1, f);
        //fread(&min, sizeof(int), 1, f);
        if (i == k) {
            number = 999;
        }
        fwrite(&number, sizeof(int), 1, f);
        //cout << number << " ";
    }
    
    fclose(f);
}
