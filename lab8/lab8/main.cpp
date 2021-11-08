#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#define N 100
int main(void) {
    int A[N];
    int t;
    for (int i=0; i<N; i++) {
        A[i] = rand()%200-100;
    }
    for (int i=0; i<N; i++) {
        std::cout << A[i]<<" ";
    }
    for (int i=0; i<N-1; i++) {
        for (int j = i; j<N; j++) {
            if (A[i]<A[j]) {
                t = A[i]; A[i]=A[j]; A[j]=t;
            }
        }
    }
    std::cout<< "\nОтсортированый массив: ";
    for (int i=0; i<N; i++) {
        std::cout<<A[i]<<" ";
    }

  return 0;
}
