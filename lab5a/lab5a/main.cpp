#include <math.h>
#include <iostream>

int main()
{
    

    double a, b, c, x, x1, x2, D;
    while (1) {

        printf("Введите коэфициент a = ");
        scanf("%lf", &a);
        printf("Введите коэфициент b = ");
        scanf("%lf", &b);
        printf("Введите коэфициент c = ");
        scanf("%lf", &c);

        D = (pow(b, 2) - (4 * a * c));
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        x = -b / (2 * a);

        if (D > 0)
            printf("x1 = %-5.3lf \n", x1) && printf("x2 = %-5.3lf \n", x2);
        else
            if (D == 0)
                printf("x = %-5.3lf ", x);
            else
                if (D < 0)
                    printf("Нет решений");
    }
    return 0;
}
