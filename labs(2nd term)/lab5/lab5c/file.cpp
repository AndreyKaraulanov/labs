#include "file.hpp"

void Fill(int*A, int N) {
    for (int i = 0; i < N; i++) {
        *(A + i) = rand() % 100 + 1;
    }

}
void PRINT(int*A, int N){
    for (int i = 0; i < N; i++) {
            cout << *(A + i) << setw(4);
        }
        cout << endl;
}
void Booble_sort(int*A, int N) {
    Fill(A, N);
    cout << "Массив до сортировки: ";
    PRINT(A, N);
    for (int i = 0;i < N;i++) {
        for (int j = i + 1; j < N; j++) {
            if (*(A + i) > *(A + j)) {
                swap(*(A + i), *(A + j));
            }
        }
    }
    
    cout << "Массив после сортировки: ";
    PRINT(A, N);
    
}
void Shell_sort(int*A, int N) {
    Fill(A, N);
    cout << "Массив до сортировки: ";
    PRINT(A, N);
    int d = N / 2;

        while (d > 0)
        {
            for (int i = 0; i < N - d; i++)
            {
                int j = i;
                while (j >= 0 && *(A + j) > *(A + j + d))
                {
                    int temp = *(A + j);
                    *(A + j) = *(A + j + d);
                    *(A + j + d) = temp;
                    j--;
                }
            }
            d = d / 2;
        }
    cout << "Массив после сортировки: ";
    PRINT(A, N);
}
void Gnome_sort(int*A, int N) {
    Fill(A, N);
    cout << "Массив до сортировки: ";
    PRINT(A, N);
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
   
    cout << "Массив после сортировки: ";
    PRINT(A, N);
    
}
