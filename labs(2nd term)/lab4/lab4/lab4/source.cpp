#include "source.hpp"
void Array(int* pArr_A, int size, bool a) {
    srand(time(NULL));
    if (a == true) {
        cout << "Ваш массив:" << endl;
    }
    for (int i = 0; i < size; i++) {
        *pArr_A = rand() % 20;
        if (a == false) {
            pArr_A++;
        }
        if (a == true) {
            cout << *pArr_A << setw(4);
            pArr_A++;
        }
    }

}

int Average(int* pArr_A, int size, int avg) {
    
    int res = *pArr_A;
    for (int i = 0; i < size;i++) {
        res += *(pArr_A + i);
    }
    avg = res/size;
    return avg;
}

int Average_numbers(int* pArr_A, int size, int k, int avg) {
    for (int i = 0;i < size;i++)
    {
        if (*(pArr_A + i) < avg)
            k++;

    }
    return k;
}
int  Average_numbers_action(int* pArr_A, int size, int k, int* pArr_B, int avg) {
    for (int i = 0;i < size;i++)
    {
        if (*pArr_A  < avg) {
            *pArr_B = *pArr_A;
            *pArr_B++;
        }
        *pArr_A++;
    }
    return *pArr_B;
}



