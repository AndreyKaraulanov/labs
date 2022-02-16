#include <iostream>
using namespace std;

int sumnum(int a, int d = 0)
{
    if (a > 0) {
        return sumnum(a / 10, d + a % 10);
    }
    else {
        return d;
    }
}

int main() {
    int a;
    
    cout <<" Введите натуральное число: ";
    cin>>a;
    cout<<" Сумма цифр натурального "<< a << " числа: "<<  sumnum(a) << endl;
    
    cout<<endl;
    return 0;
}
