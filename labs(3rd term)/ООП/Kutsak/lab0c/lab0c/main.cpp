#include <iostream>
#include "lab.hpp"
int main()
{
    int answer;
    int a, b;

    while (true) {
        cout << "(1)Конструктор по умолчанию" << endl;
        cout << "(2)Конструктор с параметрами" << endl;
        cout << "(3)Выход" << endl;
        cin >> answer;
        switch (answer)
        {
        case 1: {
            Sum sum1, * p;
            cout << "через объект:" << endl;
            sum1.getsumm();
            sum1.show();
            cout << "через указатель на объект:" << endl;
            p = &sum1;
            p->getsumm();
            p->show();
            break;
        }
        case 2: {
            cout << "Введите x, y:" << endl;
            cin >> a;
            cin >> b;
            cout << "через объект:" << endl;
            Sum sum2(a, b);
            sum2.getsumm();
            sum2.show();
            cout << "через указатель на объект:" << endl;
            Sum* ptr;
            ptr = &sum2;
            ptr->getsumm();
            ptr->show();
            break;
        }
            case 3:
                exit(0);
        default:
            cout << "Такого действия нет" << endl;
            break;
        }
        cout << "Введите значение x" << endl;
    }
}
