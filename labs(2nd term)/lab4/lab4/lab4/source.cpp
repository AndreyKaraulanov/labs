#include "source.hpp"
void Array(int* pArr_A, int size, bool a) {
    srand(time(NULL));
    if (a == true) {
        cout << "Âàø ìàññèâ:" << endl;
    }
    for (int i = 0; i < size; i++) {
        *pArr_A = rand() % 20 - 10;
        if (a == false) {
            pArr_A++;
        }
        if (a == true) {
            cout << *pArr_A << setw(4);
            pArr_A++;
        }
    }

}
int Negative_numbers(int* pArr_A, int size, int k) {
    for (int i = 0;i < size;i++)
    {
        if (*(pArr_A + i) < 0)
            k++;

    }
    return k;
}
int  Negative_numbers_action(int* pArr_A, int size, int k, int* pArr_B) {
    for (int i = 0;i < size;i++)
    {
        if (*pArr_A  < 0) {
            *pArr_B = *pArr_A;
            *pArr_B++;
        }
        *pArr_A++;
    }
    return *pArr_B;
}

int Replacement_max(int* pArr_A, int size, int max) {
    
    for (int i = 0; i < size;i++) {
        if (max < *(pArr_A + i)) {
            max = *(pArr_A + i);
        }
    }
    return max;
}

int Replacement(int* pArr_A, int size, int max) {
    for (int i = 0; i < size; i++) {
        if (*(pArr_A + i) >= 0) {
            *(pArr_A + i) = max;
        }
    }
        return *pArr_A;
}
