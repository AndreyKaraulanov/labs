#include "source.hpp"

int main()
{
    while (true) {
        bool a;
        int size;
        int k = 0;
        int max = 0;
        cout << endl;
        cout << "Введите количество элементов массива:" << endl;
        cin >> size;
        int* pArr_A = new int[size];
        Array(pArr_A, size, 1);
# ifdef SOLVE
        k = Negative_numbers(pArr_A, size, k);
        cout << endl;
        cout << "Количество отрицательных чисел:" << k;
        cout << endl;
        int* pArr_B = new int[k];
        Negative_numbers_action(pArr_A, size, k, pArr_B);
        cout << "Массив отрицательных чисел:" << endl;
        for (int i = 0; i < k; i++)
        {
            cout << *(pArr_B + i) << setw(4);
        }
        delete[]pArr_B;
#endif
# ifdef DEBUG
        
        
        max=Replacement_max(pArr_A, size,max);
        cout << endl;
        cout << "Максимальное число массива:" << max<<endl;
        Replacement( pArr_A, size, max);
        cout << "Замена максимальным элементом положительных чисел:" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << *(pArr_A + i) << setw(4);
        }
#endif
        delete[]pArr_A;
    }
}
