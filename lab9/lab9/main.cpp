#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <string>
#include <set>
using namespace std;
#define S 9

int main() {
      
    int Ar[S][S] ={};
    int c = 1;
    for (int j = 0; j < S; j++) {
        for (int i = 0; i < S; i++) {
            if((j<i && i<S/2) || (j<S-i-1 && i>=S/2) || (j>S-i-1 && i<S/2) || (j>i && i>=S/2))
                    Ar[i][j]=c++;
            else
                    Ar[i][j]=0;
        }
    }
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++) {
            cout << setw(4) << Ar[i][j];
        }
        cout<<endl;
    }
    return 0;
}

