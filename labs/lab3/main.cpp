#include <iostream>
#include <stdio.h>
#include <math.h>

int main(void) {
double x;
    double a=12.5, b=1.3;
    double t1, t2;
    double ax;
    printf("Введите x>");
    scanf("%lf",&x);
    ax = a*x;
    double pi = 3.14;
    t1 = (log(x)+(2*b)/x-pow(b, 2)/(2*pow(x, 2)))/pow(a, 3);
    t2 = cos(ax*(pi/180))/(2*a*pow(sin(ax*(pi/180)), 2))+(log(tan((ax/2)*(pi/180)))/2*a);
    if (log(x)>0)
        printf("t1 = %lg\n",t1);
    else
        printf("Введите другое значение x\n");
    if (log(tan(ax/2))>0)
        printf("t2 = %lg\n", t2);
    else
        printf("Введите другое значение x\n");
    return 0;
}
