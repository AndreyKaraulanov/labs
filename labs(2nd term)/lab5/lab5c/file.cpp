#include "file.hpp"

void Fill(int*A, int N) {
    for (int i = 0; i < N; i++) {
        *(A + i) = rand() % 100 + 1;
    }

}
void Pysirok(int*A, int N) {
    for (int i = 0;i < N;i++) {
        for (int j = i + 1; j < N; j++) {
            if (*(A + i) > *(A + j)) {
                swap(*(A + i), *(A + j));
            }
        }
    }
    
}
void Choara(int*A, int N) {
    int i, j;
    int lb, ub;

    int* levo = new int[N];
    int*pravo=new int [N];
    int tekpoz = 1;
    int seredina;
    int pivot;
    int temp;

    levo[1] = 0;
    pravo[1] = N - 1;
    cout << endl;

    do {
      
        lb = levo[tekpoz];
        ub = pravo[tekpoz];
        tekpoz--;

        do {
           
            seredina = (lb + ub) >> 1;
            i = lb; j = ub; pivot = A[seredina];
            do {
                while (*(A+i) < pivot) i++;
                while (pivot < *(A + j)) j--;
                if (i <= j) {
                    temp = *(A+i); *(A + i) = *(A + j); *(A + j) = temp;
                    i++; j--;
                }
            } while (i <= j);
            if (i < seredina) {
                if (i < ub) {
                    tekpoz++;
                    levo[tekpoz] = i;
                    pravo[tekpoz] = ub;
                }

                ub = j;
                
            }
            else {
                if (j > lb) {
                    tekpoz++;
                    levo[tekpoz] = lb;
                    pravo[tekpoz] = j;

                }
                lb = i;

            }
        } while (lb < ub);
    } while (tekpoz != 0);
 
}
void Gnome_sort(int*A, int N) {
    int i = 0;
    int tmp = 0;
    while (i < N) {
        if (i == 0 ||*( A+i - 1) <= *(A + i))
            i++;
        else {
            tmp = *(A + i);
            *(A + i) = *(A+i - 1);
            *(A + i - 1) = tmp;
            i--;

        }
    }
   
}
