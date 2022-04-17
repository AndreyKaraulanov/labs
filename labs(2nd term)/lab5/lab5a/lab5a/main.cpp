#include "file.hpp"
int main()
{
    srand(time(NULL));
    int N;
    while (true) {
        cout << "Введите количество элементов в массиве: " << endl;
        cin >> N;
        int** A = new int* [N];
        int* min = new int[N];
        int* max = new int[N];
        int* result = new int[2];
        int sum = 0;
        long  int proizv = 1;
        Fill(A, N);
        Function(A, min, max, result, &sum, &proizv, N);
        cout << endl;
        for (int i = 0; i < 2; i++) {
            cout << *(result + i);
            cout << "\t";
        }
        delete[]A;
        delete[]min;
        delete[]max;
        delete[]result;
        cout << endl;
    }
}
