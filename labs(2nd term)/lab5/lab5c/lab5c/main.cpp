#include "file.hpp"
int main()
{
    while (true) {
        int N;
        void(*p)(int *A, int N);
        cout << endl;
        cout << "Введите количество элементов: " << endl;
        cin >> N;
        int* A = new int[N];
        
        cout << endl;
        cout << "Выберите какой сортировкой хотите воспользоваться:" << endl;
        cout << "1 - Пузырьком" << endl;
        cout << "2 - Шелла" << endl;
        cout << "3 - Гномья" << endl;
        cout << "4 - Выход" << endl;
        int answer;
        cin >> answer;
        if (answer == 1) {
            p = Booble_sort;
            cout << "Сортировка пузырьком";
            p(A,  N);
         
            /*for (int i = 0; i < N;i++) {
                cout << setw(4) << *(A + i);
            }
            cout << endl;*/
        }
        else if (answer == 2) {
            p=Shell_sort;
            cout << "Сортировка Шелла";
            p(A, N);
        
            /*for (int i = 0; i < N;i++) {
                cout << setw(4) << *(A + i);
            }
            cout << endl;*/
        }
        else if (answer == 3) {
            p=Gnome_sort;
            cout << "Гномья сортировка";
            p(A, N);
        
            /*for (int i = 0; i < N;i++) {
                cout << setw(4) << *(A + i);
            }
            cout << endl;*/
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
