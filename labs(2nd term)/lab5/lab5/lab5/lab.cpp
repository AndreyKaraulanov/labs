#include "lab.hpp"
void  Fill_Odnom(int*A1, int N) {
    int prib = 1;
    int delta = 0;
    for (int delta = 0; delta < N;delta++)
    {

            for (int j = delta; j < N + delta; j++) {
                for (int i = delta; i < N + delta;i++) {
                    if ((j<i && i<N/2) || (j<N-i-1 && i>=N/2) || (j>N-i-1 && i<N/2) || (j>i && i>=N/2)) {
                        *(A1+(j* N +i))=prib;
                        prib++;
                    }
                    else
                        *(A1+(j* N +i))=0;
                }
            }
            

    }
    

}
void Fill_Dvum(int** A2, int N) {
    int prib = 1;

    
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N;i++) {
            if ((j<i && i<N/2) || (j<N-i-1 && i>=N/2) || (j>N-i-1 && i<N/2) || (j>i && i>=N/2)) {
                *(*(A2 + i)+j) = prib;
                prib++;
            }
            else
                *(*(A2 + i)+j) = 0;
        }
    }
    
    
}
