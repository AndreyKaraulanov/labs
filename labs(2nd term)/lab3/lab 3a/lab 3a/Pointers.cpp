#include "Pointers.hpp"
void Otnositelniy(int *arr, int size) {
    cout << endl;
    cout << "Массив: " << endl;
    for (int i = 0; i < size; i++) {
        *(arr + i) = rand() % 20 - 10;
        cout << *(arr + i)<<setw(4);
    }
    cout << endl;

    int count=0;
    for (int i = 0; i < size;i++) {
        if (*(arr + i) < 0) {
            count++;
        }
    }
    cout << "Количесвто отрицательных элементов: " <<count<< endl;
#ifdef DEBUG
    
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) < 0) {
            sum += *(arr + i);
        }
    }
    cout << "Сумма отрицательных элементов: " << sum << endl;
#endif
}
void Absolutniy(int* arr, int size) {
    int* arr_start = arr;
    cout << endl;
    cout << "Массив" << endl;
    for (int i = 0; i < size;i++) {
        *arr = rand() % 20 - 10;
        cout << *arr << setw(4);
        arr++;
    
    }
    arr = arr_start;
    int count = 0;
    cout << endl;
    for (int i = 0;i < size;i++) {
        if (*arr < 0) {
            count++;
        }
        arr++;
    }
    cout << "Количество отрицательных элементов:" << count << endl;
    arr = arr_start;
#ifdef DEBUG
    int sum = 0;
    for (int i = 0; i < size;i++) {
        if (*arr < 0) {
            sum += *arr;
        }
        arr++;
    }
    cout << "Сумма отрицательных элементов: " << sum << endl;
#endif
}
void Noadres(int* arr, int size) {
    int* arr_start = arr;
    cout << endl;
    cout << "Массив: " << endl;
    for (;arr < arr_start + size;arr++) {
        *arr = rand() % 20 - 10;
        cout << *arr << setw(4);
    }
    arr = arr_start;
    int count = 0;
    cout << endl;
    for (arr = arr_start;arr < arr_start + size;arr++) {
        if (*arr < 0) {
            count++;
        }
    }
    cout << "Количество отрицательных элементов: " << count << endl;
    arr = arr_start;
#ifdef DEBUG
    int sum = 0;
    for (arr = arr_start;arr < arr_start + size;arr++) {
        if (*arr < 0) {
            sum += *arr;
        }
    }
    cout << "Сумма отрицательных элементов: " << sum << endl;
#endif
}
void Maspoint() {
    const int size = 10000;
    int M;
    cout << "Введите количесвто элементов: " << endl;
    cin >> M;
    int arr[size];
    cout << "Массив: " << endl;
    for (int i = 0; i < M;i++) {
        arr[i] = rand() % 20 - 10;
        cout << arr[i] << setw(4);
    }
    int* parr[size];
    for (int i = 0; i < M; i++) {
        parr[i] = &arr[i];
    }
    int count = 0;
    cout << endl;
    for (int i = 0; i < M;i++) {
        if (*parr[i] < 0) {
            count++;
        }
    }
    cout << "Количество отрицательных элементов: " << count << endl;
#ifdef DEBUG
    int sum = 0;
    for (int i = 0; i < M;i++) {
        if (*parr[i] < 0) {
            sum += *parr[i];
        }
    }
    cout << "Сумма отрицательных элементов: " << sum << endl;
#endif
}
void Pointertopointer() {
    const int size = 10000;
    int M;
    cout << "Введите количесвто элементов: " << endl;
    cin >> M;
    int arr[size];
    cout << "Массив: " << endl;
    for (int i = 0; i < M;i++) {
        arr[i] = rand() % 20 - 10;
        cout << arr[i] << setw(4);
    }
    int* p[size];
    for (int i = 0; i < M; i++)
    {
        p[i] = &arr[i];
    }
    int** pp =p;
    int count = 0;
    cout << endl;
    for (int i = 0; i < M;i++) {
        if (**pp<0) {
            count++;
        }
        *(++(*pp));
    }
    cout << "Количество отрицательных элементов: " << count << endl;
    for (int i = 0; i < M; i++)
    {
        p[i] = &arr[i];
    }
    pp = p;
#ifdef DEBUG
    int sum = 0;
    for (int i = 0; i <M;i++) {
        if (**pp < 0) {
            sum += **pp;
        }
        *(++(*pp));
    }
    cout << "Сумма отрицательных элементов: " << sum << endl;
#endif
}
void Parametr(int *arr, int M, int*sum, int *count) {
    for (int i = 0; i < M; i++) {
        if (arr[i] < 0) {
            *count+=1;
#ifdef DEBUG
            *sum += arr[i];
#endif 
        }
    }
}
