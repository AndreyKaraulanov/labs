#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
int main() {

short n;
double x, y;
short h;
float temp = 0;
for (n = 0; n < 5; n++) {
printf("|   x   |      y     |\n");
printf("|-------|------------|\n");
if (n == 0){
            x = 0;
        }
else{
            x = -1;
        }
for (; x <= 3; x += 0.25) {
if (x <= 3) {
                y = -abs(x - 1) + 1;
            }
printf("| %5.2lf | %10.7lf |", x + n * 5, y);
            h = (y + 1) * 8;
    //if (y - 1 - h * 8 > 0.25) {
                //h++;
            //};
for (; h > 0; h--){
printf(" ");
            };
printf("*\n");
        }
printf("Нажмите клавишу Enter...");
getchar();
    }
return 0;
}
