#include "source.hpp"

int main()
{
    while (true) {
        bool a;
        int size;
        int k = 0;
        
        cout << endl;
        cout << "Введите количество элементов массива:" << endl;
        cin >> size;
        int* pArr_A = new int[size];
        Array(pArr_A, size, 1);
# ifdef SOLVE
        int avg = Average(pArr_A, size,avg);
        cout << endl;
        cout << "Среднее арифмитическое массива:" << avg<<endl;
#endif
# ifdef DEBUG
        
        
        
        k = Average_numbers(pArr_A, size, k, avg);
        cout << endl;
        cout << "Количество чисел меньше среднего:" << k;
        cout << endl;
        int* pArr_B = new int[k];
        Average_numbers_action(pArr_A, size, k, pArr_B, avg);
        cout << "Массив чисел меньше среднего:" << endl;
        for (int i = 0; i < k; i++)
        {
            cout << *(pArr_B + i) << setw(4);
        }
        delete[]pArr_B;
#endif
        delete[]pArr_A;
    }
}
