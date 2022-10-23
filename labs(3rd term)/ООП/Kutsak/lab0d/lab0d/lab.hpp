#pragma once
#include <iostream>
#define DEBUG
using namespace std;
class Timer {
private:
    int sec;
    int min;
public:
    Timer(int sec);
    Timer(int sec, int min);
    Timer(const Timer &timer2);
    void show();
};
