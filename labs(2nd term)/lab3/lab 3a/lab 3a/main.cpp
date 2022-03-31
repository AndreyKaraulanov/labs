#include "Pointers.hpp"

int main()
{
    srand(time(NULL));
    while (true) {
        cout << "(1)Относительный адрес:" << endl;
        cout << "(2)Абсолютный адрес:" << endl;
        cout << "(3)Не используя индексацию:" << endl;
        cout << "(4)Через массив указателей:" << endl;
        cout << "(5)Через указатель на указатель:" << endl;
        cout << "(6)С параметрами указателя:" << endl;
        int answer;
        cin >> answer;

        if (answer == 1) {
            cout << "Количество элементов массива: " << endl;
            const int M=10000;
            int size;
            cin >> size;
            int arr [M];
            Otnositelniy(arr, size);
            
        }
        if (answer == 2) {
            cout << "Количество элементов массива: " << endl;
            const int M = 10000;
            int size;
            cin >> size;
            int arr[M];
            Absolutniy(arr, size);
            
        }
        if (answer == 3) {
            cout << "Количество элементов массива: " << endl;
            const int M = 10000;
            int size;
            cin >> size;
            int arr[M];
            Noadres(arr, size);
        
        }
        if (answer == 4) {
            Maspoint();
        }
        if (answer == 5) {
            Pointertopointer();
        }
        if (answer == 6) {
            const int size = 10000;
            int M;
            cout << "Количество элементов массива: " << endl;
            cin >> M;
            int arr[size];
            cout << "Массив:" << endl;
            for (int i = 0; i < M; i++)
            {
                arr[i] = rand()%20 - 10;
                cout << arr[i] << setw(4);
            }
            int sum = 0;
            int count = 0;
            Parametr(arr, M, &sum, &count);
            cout << endl;
            cout << "Количество отрицательных элементов:" << count << endl;
            cout << "Сумма отрицательных элементов:" << sum << endl;
        }
    }
}
