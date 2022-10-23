#include "lab.hpp"
Figure::Figure(float r, float a , float b, float c) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->r = r;
}
void Figure::Square() {
    if (a == 0 && b == 0 && c == 0) {
        cout << "Площадь круга = " << " " << pi * r * r << endl;
    }
    else {
        cout << "Площадь треугольника = " << " " << ((a + b + c) / 2) * r << endl;
    }
}
