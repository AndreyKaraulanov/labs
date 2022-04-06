#include "pointer.hpp"
int Array(int* pArr_A, int M, bool a) {
    srand(time(NULL));
    if (a == true) {
    }
        for (int i = 0; i < M; i++) {
            *pArr_A = rand() % 20;
            if (a == false) {
                pArr_A++;
            }
            if (a == true) {
                cout << *pArr_A << setw(4);
                pArr_A++;
            }
    }
    return  pArr_A, M;
}



void Replacement(int* pArr_A, int M,  int* pArr_B) {
    cout << endl;
    int avg = *pArr_A;
    for (int i = 0; i < M;i++) {
        avg += *(pArr_A + i);
    }
    double res = avg/M;
    cout<<res<<endl;
    int* pArr_A_start = pArr_A;
   int k = 0;
   for (pArr_A  = pArr_A_start; pArr_A < pArr_A_start + M;++pArr_A)
   {
       if (*pArr_A < res) k++;
       
   }
   cout << endl;
    
    int* pArr_B_start = pArr_B;

    for (pArr_A = pArr_A_start; pArr_A < pArr_A_start + M; ++pArr_A)
    {
        if (*pArr_A < res)
        {
            
            *pArr_B = *pArr_A;
            pArr_B++;
        }
    }
    cout << endl;
    pArr_B = pArr_B_start;
    for (int i = 0; i < k; i++)
    {
        cout<< *pArr_B << setw(4);
        pArr_B++;
    }
}
