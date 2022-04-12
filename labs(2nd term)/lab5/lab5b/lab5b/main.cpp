#include "file.hpp"

int main()
{
    while (true) {
        srand(time(0));
        cout << "Введите количество элементов массива:";
        void(*p)(int* A, int N, int* sum, int* proizv);
        int N;
        cin >> N;
        int* A = new int[N];
        Fill(A, N);
        for (int i = 0; i < N; i++)
        {
            cout << setw(4) << *(A + i);
        }
        int sum =0;
        int proizv=1;
        p = Sum;
        p(A, N, &sum, &proizv);
        cout << endl;
        cout << "Cумма:" << sum << endl;
        p = Proizvedenie;
        p(A,N,&sum,&proizv);
        cout << "Произведение:" << proizv;
        delete[] A;
        cout << endl;
    }
}
