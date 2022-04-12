#include "file.hpp"
void Fill(int *A, int N) {
    for (int i = 0; i < N;i++) {
        *(A + i) = rand() % 20 - 10;
    }
};
void Sum(int *A, int N,int* sum, int* proizv) {

    for (int i = 0; i < N; i++)
    {
        if (*(A + i) > 0) {
            *sum += *(A + i);
        }
    }

};
void Proizvedenie(int* A, int N, int *sum, int *proizv) {
    for (int i = 0; i < N; i++)
    {
        if (*(A + i) < 0) {
            *proizv *= *(A + i);
        }
    }
    
};
