#include "pointer.hpp"

int main()
{
    while (true) {
        const int size = 10000;
        int pArr_A[size];
        int pArr_B[size];
        int M;
        cout << endl;
        cout << "Введите количество элементов массива(до 10000):" << endl;
        cin >> M;

        Array(pArr_A, M, 1);
# ifdef SOLVE
        Negative_numbers(pArr_A, M, pArr_B);
#endif
# ifdef DEBUG
        Replacement(pArr_A, M);
#endif
    }
}
