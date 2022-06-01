#include "files.hpp"
#define size 20

void task() {

    FILE* data = fopen("data.bin","wb");

    int number;
    cout << "Все числа: ";
    for (int i = 0; i < size;i++) {
        number = rand() % 15 + 2;
        cout << setw(4) << number;
        fwrite(&number, sizeof(int), 1, data);
    } cout << endl;
    fclose(data);

    data = fopen("data.bin", "rb+");
    int hash;
    int summ = 0;

    cout << "2 элемент: ";
    fseek(data, sizeof(int), NULL);
    fread(&hash, sizeof(int), 1, data);
    cout << hash << endl;
    summ += hash;

    cout << "5 элемент: ";
    fseek(data, 4*sizeof(int), NULL);
    fread(&hash, sizeof(int), 1, data);
    cout << hash << endl;
    summ += hash;

    cout << "9 элемент: ";
    fseek(data, 8 * sizeof(int), NULL);
    fread(&hash, sizeof(int), 1, data);
    cout << hash << endl;
    summ += hash;

    cout << "Сумма 2,5 и 9 элемента: " << summ << endl;



    cout << "Минимальное: ";
    int nnn = 999;
    int min = INT_MAX;
    int save_position;
    for (size_t i = 0, position = 0; i < size; i++, position++){

        fseek(data, position * sizeof(int), NULL);
        fread(&hash, sizeof(int), 1, data);
        if (min >= hash) {
            min = hash;
            save_position = position;
        }
    }
    cout << min << endl;
    fseek(data, save_position * sizeof(int), NULL);
    fwrite(&nnn, sizeof(int), 1, data);

    for (size_t i = 0, position = 0; i < size; i++, position++) {

        fseek(data, position * sizeof(int), NULL);
        fread(&hash, sizeof(int), 1, data);
        cout << setw(4) << hash;
    }


    fclose(data);

}
