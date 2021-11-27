#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

char f(int a, int b){
    if(a>b)return '>';
    if(a<b)return '<';
    return '=';
}

int main() {
    while (true) {
        int a;
        int b;
        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число: ";
        cin >> b;
        cout << a << f(a, b) << b << endl << endl;
    }
    return 0;
}
