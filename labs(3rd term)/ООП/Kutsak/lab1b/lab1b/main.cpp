#include <iostream>
#include "lab.hpp"
int main()
{
    float a, b, c, r;
    while (true) {
        cout << "Площадь какой фигуры будем искать:" << endl;
        cout << "1 - Треугольника (через вписанную окружность)" << endl;
        cout << "2 - Круга" << endl;
        cout << "3 - Выход" << endl;
        int answer;
        cin >> answer;
        if (answer == 1) {
            cout << "Введите 3 стороны треугольника" << endl;
            cin >> a;
            cin >> b;
            cin >> c;
            cout << "Введите радиус вписанной окружности" << endl;
            cin >> r;
            Figure fig1(r, a, b, c);
            fig1.Square();
        }
        else if (answer == 2) {
            cout << "Введите радиус круга" << endl;
            cin >> r;
            Figure fig2(r);
            fig2.Square();
        }
        else if (answer == 3) {
            exit(0);
        }
        else
            cout << "Такого действия нет" << endl;
    }
}
