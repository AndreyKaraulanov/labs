#include "file.hpp"
int main()
{
    srand(time(NULL));
    int N;
    while (true) {
        cout << "Введите количество элементов в массиве: " << endl;
        cin >> N;
        
        int** A = new int* [N];
        for (int i = 0; i < N; i++) {
            *(A+i)=new int[N];
        }
        int* min = new int[N];
        int* max = new int[N];
        //int* sp = new int[2];
        int sum = 0;
        long  int proizv = 1;
        Fill(A, N);
        int *sp = Function(A, min, max,  &sum, &proizv, N);
        
        cout << "Массив, содержащий сумму и произведение: " << endl;
        for (int i = 0; i < 2; i++) {
            cout << *(sp + i);
            cout << "\t";
        }
        for (int i = 0; i < N; i++) {
            delete[]A[i];
        }
        delete[]A;
        delete[]min;
        delete[]max;
        delete[]sp;
        cout << endl;
    }
}
