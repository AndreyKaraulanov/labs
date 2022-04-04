#include "lab.hpp"
int main()
{
    cout << "Введите размерность матрицы:";
    int N;
    cin >> N;
    int* A1;
#ifdef DEBUG
     A1 = new int[N * N];
    //функция заполнения
    Fill_Odnom(A1, N);
    //вывод
    cout << "Ваш массив:";
    cout << endl;
    for (int i = 0; i < N;i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(10)<< *(A1 + (i * N + j)) ;
        }
        cout << endl;
    }
    delete[]A1;
#else DEBUG
    //Создание массива
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
            cout << setw(10) << *(*(A2 + i) + j);
        }
        cout << endl;
    }
    delete[]A2;
#endif DEBUG
}

void Fill_Dvum(int** A2, int N) {
    int prib = 1;


    for (int i = 0; i < N - 2; i++)
    {

        for (int j =  i; j < N - i; j++)
        {
            *(*(A2 +i)+j) = prib;
            prib++;
        }
        prib--;
        for (int j =  i; j < N - i; j++)
        {

            *(*(A2+j) +N - 1 - i) = prib;
            prib++;
        }
        prib--;
        for (int j = N - 1 - i; j >= i;j--)
        {

            *(*(A2+N - 1 - i)+j) = prib;
            prib++;
        }
        prib--;
        for (int j = N - 1 - i; j >= 1 + i; j--)
        {

            *(*(A2+j) + i) = prib;
            prib++;
        }

    }
    
}
