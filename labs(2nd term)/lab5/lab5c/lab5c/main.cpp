#include "file.hpp"
int main()
{
    while (true) {
        int N;
        void(*p)(int *A, int N);//Огласили указатель на функцию
        cout << endl;
        cout << "На сколько элементов создадим массив?" << endl;
        cin >> N;
        int* A = new int[N];
         Fill(A, N);
        cout << "Ваш массив:" << endl;
        for (int i = 0; i < N;i++) {
            cout << setw(4) << *(A + i);
        }
        cout << endl;
        cout << "Выберите какой сортировкой хотите воспользоваться:" << endl;
        cout << "(1) Пузырьком" << endl;
        cout << "(2) Хоара" << endl;
        cout << "(3) Гномья" << endl;
        cout << "(4) Выход" << endl;
        int answer;
        cin >> answer;
        if (answer == 1) {
            p = Pysirok; p( A,  N);
         
            for (int i = 0; i < N;i++) {
                cout << setw(4) << *(A + i);
            }
            cout << endl;
        }
        else if (answer == 2) {
            p=Choara; p(A, N);
        
            for (int i = 0; i < N;i++) {
                cout << setw(4) << *(A + i);
            }
            cout << endl;
        }
        else if (answer == 3) {
            p=Gnome_sort; p(A, N);
        
            for (int i = 0; i < N;i++) {
                cout << setw(4) << *(A + i);
            }
            cout << endl;
        }
        else if (answer == 4) {
            break;
        }
        else {
            cout << "Такого действия нет, попробуйте еще" << endl;
        }
        delete [] A;
   }
}
