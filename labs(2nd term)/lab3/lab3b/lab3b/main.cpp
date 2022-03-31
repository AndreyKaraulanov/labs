#include "pointer.hpp"

int main()
{
    int size = 0;
    bool vivod;
    const int M=10000;
    while (true) {
        srand(time(NULL));
        cout << endl;
        cout << "Введите количество элементов массива" << endl;
        cin >> size;
        int A [M];
        cout << "Ваш массив:" << endl;
        for (int i = 0; i < size; i++)
        {
            *(A + i) = rand() % 20 - 10;
            cout << *(A + i) << setw(4);
        }
        cout << endl;
        int count = bcount(A, size);
        int razm = crazm(A, size);
        int razmer = drazmer(A, size);
        int b [M];
        int c [M];
        int d [M];
#ifdef DEBUG

        cout << "(1)Массив с отрицательными числами:" << endl;
        cout << "(2)Массив с положительными числами:" << endl;
        cout << "(3)Массив с нулевыми числами::" << endl;
        cout << "(4)Все действия сразу:" << endl;
        int answer;
        cin >> answer;
        if (answer == 1) {
            B(A, b, size, count, 1);
        }
        if (answer == 2) {
            C(A, c, size, razm,1);
        }
        if (answer == 3) {
            D(A, d, size, razmer,1);
        }
        if (answer == 4) {
            B(A, b, size, count,1);
            C(A, c, size, razm,1);
            D(A, d, size, razmer,1);
        }
#endif DEBUG
        B(A, b, size, count,0);
        C(A, c, size, razm,0);
        D(A, d, size, razmer,0);
        cout << endl;
        cout << "Переписанный массив" << endl;
        for (int i = 0; i < razmer; i++) {
            *(A + i) = *(d + i);
        }
    
        for (int i = razmer, j = 0; i < count, j < count;i++, j++) {

            *(A + i) = *(b + j);

        }

        for (int i = razmer + count, j = 0; i < razm, j < razm;i++, j++) {

            *(A + i) = *(c + j);

        }
        
        for (int i = 0;i < size;i++) {
            cout << *(A + i) << setw(4);
        }
        
    
    }
}
