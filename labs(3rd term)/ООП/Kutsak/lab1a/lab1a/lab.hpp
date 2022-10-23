#pragma once
#include <iostream>
using namespace std;
class Point {
private:
    int x, y;
public:
    Point();
    Point(int x, int y);
    Point(const Point& other);
    void set(int x, int y);
    void sumandmultiplication(int& x, int& y);
    void show();
};
