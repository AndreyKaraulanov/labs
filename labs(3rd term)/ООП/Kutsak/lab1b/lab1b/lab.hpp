#pragma once
#include <iostream>
#define pi 3.14
using namespace std;
class Figure {
private:
    float a, b, c, r;
public:
    Figure(float a = 0, float b = 0 , float c = 0, float r = 0);
    void Square();
};
