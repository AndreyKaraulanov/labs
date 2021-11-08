#include <iostream>
#include <stdio.h>
#include <math.h>
int main(void) {
    long n;
    double dbln;
    double sum=0;
    double term;
    const double eps=0.00000000001;
    long k2=1;
    short k1=1;
        for (n=0; ; n++, k2*=2, k1=-k1) {
            dbln=n;
            term=k1*(k2)/(pow(n, n+1)+1);
            if (fabs(term)>=eps)
                sum+=term;
            else break;
            if (n==8)
                printf("Сумма 9 членов ряда = %10.7lf\n",sum);
         }
    
       printf("Полная сумма ряда = %10.7lf\n",sum);
    return 0;
}
