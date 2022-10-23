#include "lab.hpp"
Point::Point() {
    x = 0;
    y = 0;
}
Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}
Point::Point(const Point& other) {
    x = other.x;
    y = other.y;
}
void Point::set(int x, int y) {
    this->x = x;
    this->y = y;
}
void Point::sumandmultiplication(int &x, int &y) {
    this->x = x + y;
    this->y = x * y;
}
void Point::show() {
    cout << "Сумма:" << " " << x << endl;
    cout << "Произведение:" << " " << y << endl;
}
