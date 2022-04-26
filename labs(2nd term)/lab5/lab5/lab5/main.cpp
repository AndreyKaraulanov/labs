#include "lab.hpp"
int main()
{
    cout << "Введите размерность матрицы:";
    int N;
    cin >> N;
    int* A1;
    int** A2 = new int* [N];
    for (int i = 0; i < N; i++)
    {
        A2[i] = new int[N];
    }
    //Заполнение массива
    Fill_Dvum(A2, N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++) {
            cout << setw(5) << *(*(A2 + i) + j);
        }
        cout << endl;
    }
    for (int i = 0; i < N; i++) {
        delete[]A2[i];
    }
    delete[]A2;
    //Создание массива
    A1 = new int[N * N];
   //функция заполнения
   Fill_Odnom(A1, N);
   //вывод
   cout << "Ваш массив:";
   cout << endl;
   for (int i = 0; i < N;i++) {
       for (int j = 0; j < N; j++) {
           cout << setw(5)<< *(A1 + (i * N + j)) ;
       }
       cout << endl;
   }
   delete[]A1;
}
