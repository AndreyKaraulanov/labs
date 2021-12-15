#include <iostream>
#include <stdio.h>
int main(int argc, const char * argv[]) {
    while (true) {
        int count;
        printf("Сколько грибов?");
        scanf("%d",&count);
        int int_count = count;
        if (int_count % 100 >=5 && int_count % 100<=20) {
            printf("У меня %d грибов!\n", count);
    
        }
        else if (int_count % 10 == 1)
        {
            printf("У меня %d гриб!\n", count);
        }
        else if (int_count % 10 >= 2 && int_count % 10 <=4)
        {
            printf("У меня %d гриба!\n", count);
        }
        else
            printf("У меня %d грибов!\n", count);
    }
    return 0;
}
