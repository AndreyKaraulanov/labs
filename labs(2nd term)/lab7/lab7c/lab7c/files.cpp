#include "files.hpp"
void Function() {
    FILE* f = fopen("f.txt", "wb");;
    
    int number;
        cout << "Элементы: " << endl;
        for (int i = 0; i < M; i++)
        {
            number = rand() % 20 + 1;
            
            cout << number << " " ;
            fwrite(&number, sizeof(int), 1, f);
            
        
    }
    fclose(f);

    cout << endl;
    
    f = fopen("f.txt", "rb");
    int hash;
    int sum = 0;
    
    cout << "2 элемент: ";
    fseek(f, sizeof(int), NULL);
    fread(&hash, sizeof(int), 1, f);
    cout << hash << endl;
    sum += hash;
    
    cout << "5 элемент: ";
    fseek(f, 4*sizeof(int), NULL);
    fread(&hash, sizeof(int), 1, f);
    cout << hash << endl;
    sum += hash;
    
    cout << "9 элемент: ";
    fseek(f, 8*sizeof(int), NULL);
    fread(&hash, sizeof(int), 1, f);
    cout << hash << endl;
    sum += hash;
    
    cout << "Сумма 2, 5, 9 элемента: " << sum << endl;
        
    cout << "Минимальное значение: ";
    int n = 999;
    int min = INT_MAX;
    int save_position = 0;
    for (size_t i = 0, position = 0; i < M; i++, position++){

            fseek(f, position * sizeof(int), NULL);
            fread(&hash, sizeof(int), 1, f);
            if (min >= hash) {
                min = hash;
                save_position = position;
            }
    }
    cout << min << endl;
    fseek(f, save_position * sizeof(int), NULL);
    fwrite(&n, sizeof(int), 1, f);
    
    for (size_t i = 0, position = 0; i < M; i++, position++) {
            fseek(f, position * sizeof(int), NULL);
            fread(&hash, sizeof(int), 1, f);
            
            
            //fwrite(&hash, sizeof(int), 1, f);
        
            
            cout << setw(4) << hash;
    }


    fclose(f);
}
