#include "lab.hpp"
Complex::Complex() {
    r = 0;
    m = 0;
}
void Complex::initrm(int r, int m) {
    this->r = r;
    this->m = m;
}
void Complex::add(int addr, int addm) {
    r += addr;
    m += addm;
}
void Complex::addcomp(const Complex& complex2) {
    r += complex2.r;
    m += complex2.m;
}
void Complex::show() {
    cout << "(" << r << "," << m << ")" << endl;
}
