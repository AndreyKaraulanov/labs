#include "lab.hpp"

int main()
{
    
    Complex complex1;
    Complex complex2;
    complex2.initrm(5, 4);
    while (true) {
        int r, m, addr, addm, answer;
        cout << "1 - Инициализация r и m" << endl;
        cout << "2 - Добавить число к мнимой и вещественной части" << endl;
        cout << "3 - Сложить 2 комплексных числа" << endl;
        cout << "4 - Вывод комплексного числа" << endl;
        cout << "5 - Выход" << endl;
        cin >> answer;
        switch (answer)
        {
        case 1:
            cout << "Введите вещественную часть" << endl;
            cin >> r;
            cout << "Введите мнимую часть" << endl;
            cin >> m;
            complex1.initrm(r, m);
            break;
        case 2:
            cout << "Введите сколько добавим к вещественной части: " << endl;
            cin >> addr;
            cout << "Введите сколько добавим к мнимой части: " << endl;
            cin >> addm;
            complex1.add(addr, addm);
            break;
        case 3:
            complex1.addcomp(complex2);
            break;
        case 4:
            complex1.show();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Ошибка!!" << endl;
            break;
        }
    }
}
