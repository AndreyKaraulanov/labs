#include "lab.hpp"
Sum::Sum() {
    x = 10;
    y = 20;
};
Sum::Sum(int a, int b) {
    x = a;
    y = b;
};
int Sum::getsumm() {
    s = x + y;
    return s;
}
void Sum::show() {
    cout << "x:" << x << endl;
    cout << "y:" << y << endl;
    cout << "Сумма:" << s << endl;
}
