#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    int const SIZE = 5;
    int smoking_space[SIZE] = { 1, 2, 3, 4, 5 };
    int no_smoking_space[SIZE] = { 6, 7, 8, 9, 10 };


    cout << "Welcome " << endl;
    cout << "We have two sitings areas \"smoking space\" and no \"smoking space\". You need to chose one." << endl;


    string answer;
    string smoke("yes");
    string no_smoke("no");

    int book_break = 0;

    while ( book_break < SIZE*2) {

        cout << "Are you smoking?<yes/no>  ";
        cin >> answer;

        if (cin.fail()){
            cin.clear();
            //cin.ignore(10000, '\n');
            continue;
        }

        if (answer == smoke) {
            int i;
            for ( i = 1; i < SIZE; i++) {
              //  cout << " Place " << smoking_space[i] << " is booked!" << endl;
            }
            cout << " Place " << smoking_space[i] << " is booked!" << endl;
            book_break++;
        }

        if (answer == no_smoke) {
            int j;
            for (j = 1; j < SIZE; j++) {
              // cout << " Place " << no_smoking_space[j] << " is booked!" << endl;
            }
            cout << " Place " << no_smoking_space[j] << " is booked!" << endl;
            book_break++;
        }
   
    }





    cout << "Program has been ended" << endl;
  return 0;
}

