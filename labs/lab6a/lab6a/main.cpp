#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>//;
using namespace std;


int main()
{
    srand(time(NULL));
    int num1 = rand() % 100 + 1;

    int num2, col=0;

    printf("Угадайте число!\n");

    do {
            col++;
            scanf("%i", &num2);
        if (num2 > num1) {
            printf("Это число больше моего.\n");
            printf("Попробуйте еще раз!\n");
        }
        else if (num2 < num1) {
            printf("Это число меньше моего.\n");
            printf("Попробуйте еще раз!\n");
        }
        else {
            printf("Вы угадали!");
            printf("Это было %i \n\n", num1);
        }

    } while(num2!=num1);


       printf("Количество попыток:%i\n\n\n", col);


return 0;
}
