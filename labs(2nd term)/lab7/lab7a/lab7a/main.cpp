#include "files.hpp"
int main()
{
    int* mas1 = new int[m];
    int* mas2 = new int[m];
    for (int i = 0;i < m;i++) {
        *(mas1 + i) = rand() % 10 + 1;
    }
    File_work1(mas1);
    File_work2(mas1, mas2);
    File_work3(mas1, mas2);
    delete[]mas1;
    delete[]mas2;
}
