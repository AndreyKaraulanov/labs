#include <iostream>
#include "lab.hpp"
int main()
{
    while (true) {
        int sec;
        int min;
        cout << "Введите количество секунд" << endl;
        cin >> sec;
        cout << "Введите количество минут" << endl;
        cin >> min;
        cout << "Через конструктор, проинициализированный с помощью целого числа:" << endl;
        Timer timer1(sec);
        timer1.show();
        cout << "Через конструктор, проинициализированный с помощью 2-х целых чисел:" << endl;
        Timer timer2(sec, min);
        timer2.show();
        cout << "Через конструктор копирования:" << endl;
        Timer timer3(timer2);
        timer3.show();
    }
}
