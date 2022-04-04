#include "lab.hpp"
void  Fill_Odnom(int*A1, int N) {
    int num = 0;
    int prib = 1;
    int delta = 0;
    for (int delta = 0; delta < N;delta++)
    {

            for (int i = delta; i < 1 + delta; i++) {
                for (int j = delta; j < N - delta;j++) {
                    *(A1 + (i * N + j)) = prib;
                    prib++;
                }
            }
            prib--;
            for (int i = N - 1 - delta; i < N - delta; i++) {
                for (int j = delta; j < N - delta;j++) {
                    *(A1 + (j * N + i)) = prib;
                    prib++;
                }

            }
        num = prib;
        prib--;
        for (int i = N - 1 - delta; i > delta; i--) {
            for (int j = N - 1 - delta; j > delta;j--) {
                if (i > j && i + j > N - 1) {
                    *(A1 + (i * N + j)) =num++;
                }
            }
            prib++;
        }
            for (int i = N - 1 - delta; i > delta; i--) {
                for (int j = delta + 1; j > delta;j--) {
                    *(A1 + (i * N - 1 + j)) = prib++;
                }
            }

    }
    

}
void Fill_Dvum(int** A2, int N) {
    int prib = 1;


    for (int i = 0; i < N - 2; i++)
    {

        for (int j =  i; j < N - i; j++)
        {
            *(*(A2 +i)+j) = prib;
            prib++;
        }
        prib--;
        for (int j =  i; j < N - i; j++)
        {

            *(*(A2+j) +N - 1 - i) = prib;
            prib++;
        }
        prib--;
        for (int j = N - 1 - i; j >= i;j--)
        {

            *(*(A2+N - 1 - i)+j) = prib;
            prib++;
        }
        prib--;
        for (int j = N - 1 - i; j >= 1 + i; j--)
        {

            *(*(A2+j) + i) = prib;
            prib++;
        }

    }
    
}
