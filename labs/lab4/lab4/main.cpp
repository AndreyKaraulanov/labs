#include <iostream>
#include <stdio.h>
int main() {
    unsigned short t;
    unsigned short s;
    unsigned short l;
    unsigned short UnitStateWord;
    printf("Введите тип пакета (0 - 7)>");
    scanf("%hd",&t);
    printf("Введите идентификатор источника (0 - 15)>");
    scanf("%hd",&s);
    printf("Введите длину пакета (0 - 255)>");
    scanf("%hd",&l);
    UnitStateWord=((unsigned short)t&0x7)<<13;
    UnitStateWord|=((unsigned short)s&0xF)<<8;
    UnitStateWord|=l&0xFF;
    printf("\nЗаголовок пакета в системе передачи данных = %04x\n",UnitStateWord);
    //////////////
    printf("Введите заголовок пакета в системе передачи данных\n");
    printf("(16-ричное число от 0 до 0xFFFF)>");
    scanf("%hd",&UnitStateWord);
    UnitStateWord = (t>>13) & 0x7;
    UnitStateWord|= (s>>8) & 0xF;
    UnitStateWord|= (l>>0) & 0xFF;
    putchar('\n');
    printf("Тип пакета = %hd\n", t);
    printf("Идентификатор источника = %hd\n", s);
    printf("Длина пакета = %hd\n", l);
    return 0;
}
