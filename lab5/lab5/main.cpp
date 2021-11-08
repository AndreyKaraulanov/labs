#include <iostream>
#include <stdio.h>
#include <math.h>
int main()
{
    double x,y;
    while (true) {
        printf("Введите координату x >");
        scanf("%lf",&x);
        printf("Введите координату y >");
        scanf("%lf",&y);
        printf("x=%6.3lf;  y=%6.3lf\n",x,y);
        if((x*x + y * y <= 1 && y >= 0 && x >= 0)||

        (x >= -1 && x <= 0 && y <= 0 && y >= -1))

            printf("Точка попадает в область\n");
        else
            printf("Точка не попадает в область\n");
        
    }
    return 0;
}
