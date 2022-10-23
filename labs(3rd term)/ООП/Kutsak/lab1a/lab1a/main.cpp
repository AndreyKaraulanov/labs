#include <iostream>
#include "lab.hpp"
int main()
{
    while (true) {
        int x, y;
        cout << "Введите x, y" << endl;
        cin >> x;
        cin >> y;
        cout << "Конструктор по умолчанию:" << endl;
        Point point1;
        point1.show();
        cout << "После вызова set-функции:" << endl;
        point1.set(x, y);
        point1.sumandmultiplication(x, y);
        point1.show();
        cout << "Конструктор с параметрами:" << endl;
        Point point2(x, y);
        point2.show();
        cout << "После вызова set-функции:" << endl;
        point2.set(x, y);
        point2.sumandmultiplication(x, y);
        point2.show();
        cout << "Конструктор копирования:" << endl;
        Point point3(point2);
        point3.show();
        cout << "После вызова set-функции:" << endl;
        x = -x;
        y = -y;
        point3.set(x, y);
        point3.sumandmultiplication(x, y);
        point3.show();
        
       
    }
}
