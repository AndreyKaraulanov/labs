#include "file.hpp"
void Fill(int** A, int N) {
    
    cout << "Ваш массив:" << endl;
    for (int i = 0; i < N;i++) {
        A[i] = new int[N];
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            *(*(A + i) + j) = rand() % 10 + 1;
            cout <<setw(4) <<*(*(A + i) + j) ;
        }
        cout << endl;
    }
}
int Function(int **A, int* min, int* max, int*result, int*sum,long int* proizv, int N) {
    int min_el=**A;
    int max_el=**A;
    for (int i = 0; i < N; i++) {
        min_el = *(*(A + 0) + i);
        for (int j = 0; j < N; j++) {
            if (min_el > *(*(A + j) + i)) {
                min_el = *(*(A + j) + i);
            }
        }
        *(min + i) = min_el;
    }cout << "Массив, содержащий минимальные элементы" << endl;
    for (int i = 0; i < N; i++) {
        cout << setw(4) << *(min+i);
    }
    cout << endl;
    for (int i = 0; i < N; i++) {
        max_el = *(*(A + i) + 0);
            for (int j = 0; j < N; j++) {
            if (max_el < *(*(A + i) + j)) {
                max_el = *(*(A + i) + j);
            }
        }
        *(max + i) = max_el;
    }cout << "Массив, содержащий минимальные элементы" << endl;
    
    
    for (int i = 0; i < N; i++) {
        cout << setw(4) << *(max + i);
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i ==j) {
                *sum += *(*(A+i)+j);
                
           }
            if (i + j == N - 1) {
                  *proizv*= *(*(A + i) + j);
            }
        }
    }
    result[0] = *sum;
    result[1] = *proizv;
    return  *result;
}
