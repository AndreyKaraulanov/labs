//#define _CRT_SECURE_VO_WARNINGS;
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int x[n];
    int i, j, k;
    cout<<"Input"<<n<<"numbers:"<<endl;
    for(i=0; i<n; i++)
        cin >> x[i];
    k = 0;
    for (i=0; i<n; i++) {
        if (!x[i]<0) {
            x[k]=x[i];
            k++;
        }
    }
    cout<<"Otvet:"<<endl;
    for(i=0; i<k;i++)
        cout<< x[i]<<endl;
    return 0;
}
