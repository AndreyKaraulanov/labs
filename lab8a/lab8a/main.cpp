#include <iostream>
#include <math.h>
#include <iomanip>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    int const SIZE = 5;
    int smoking_area[SIZE] = { 1, 2, 3, 4, 5 };
    int no_smoking_area[SIZE] = { 6, 7, 8, 9, 10 };


    cout << "Для того, чтобы забронировать билет нужно уточнить одну деталь" << endl;


    char ans;
    char smoke;
    smoke = 'y';
    char no_smoke;
    no_smoke = 'n';

    int booking = 0;
    int i = 0, j = 0; // arrays` index
    while ( booking < SIZE*2) {

        cout << "Вы курите?(y/n)  ";
        cin >> ans;


        if (ans == smoke) {
            if (i < 5) {
                cout << " Ваше мемто № " << smoking_area[i] << endl;
                i++;
                booking++;
            }
            else {
                cout << "Все места в зоне для курящих заняты" << endl;
            }
        }

        else if (ans == no_smoke) {
            if ( j < 5) {
                cout << " Ваше мемто № " << no_smoking_area[j] << endl;
                j++;
                booking++;
            }
            else {
                cout << "Все места в зоне для не курящих заняты" << endl;
            }
        }
    }

    cout << endl;
    cout << " Все места заняты, до скорой встречи!" << endl;
  return 0;
}


