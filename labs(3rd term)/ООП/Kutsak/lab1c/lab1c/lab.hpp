#pragma once
#include <iostream>
using namespace std;
class Complex {
private:
    int r, m;
public:
    Complex();
    void initrm(int r, int m);
    void add(int addr, int addm);
    void addcomp(const Complex& complex2);
    void show();
};
