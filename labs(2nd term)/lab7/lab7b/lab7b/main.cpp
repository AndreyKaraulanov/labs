#include "files.hpp"
int main()
{
    
    srand(time(NULL));
    FILE* f1;
    int sum=0;
    int* mas1 = new int[m];
    int* mas2 = new int[m];
    for (int i = 0;i < m;i++) {
        *(mas1 + i) = rand() % 20 - 10;
    }
    File_work1(mas1);
    File_work2(mas1, mas2);
    File_work3(mas2, &sum);
#ifdef DEBUG
    f1 = fopen("f1.txt", "wb");
    fprintf(f1, "\nМассив 1:\n");
    for (int i = 0; i < m; i++) {
        fprintf(f1, "%3d", *(mas1 + i));
    }
    fprintf(f1, "\nМассив 2:\n");
    for (int i = 0; i < m; i++) {
        fprintf(f1, "%3d", *(mas2 + i));
    }
    fprintf(f1, "\nCумма чётных:\n");
    fprintf(f1, "%3d", sum);
    fclose(f1);
#endif // DEBUG
    delete[]mas1;
    delete[]mas2;
}
