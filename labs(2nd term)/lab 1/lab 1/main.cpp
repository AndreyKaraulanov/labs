#include <iostream>
#include <stdlib.h>
#include <string>
 
using namespace std;
 
#define N 4
struct Table {
 
 
    string oboz;
    char type;
    int name;
    float am;
 
 
}tab[N];
 
void in(Table tab[]) {
 
 
    for (int i = 0; i < N; ++i) {
 
        cout << "Для " << i + 1 << " строки введите: обозначение , тип , номинал , количество: ";
        cin >> tab[i].oboz >> tab[i].type >> tab[i].name >> tab[i].am;
 
    }
 
}
 
void random(Table tab[]) {
 
    char let[3] = { 'R', 'R', 'C' };
    static string name_rand[] = { "RT-11-24", "RT-11-24", "CGU-12K" };
     
    for (int i = 0; i < N; i++) {
 
        tab[i].oboz = name_rand[rand() % 3];
        tab[i].type = let[rand() % 3];
        tab[i].name = rand() %100001 ;
        tab[i].am = rand() %20;
 
    }
}
 
void sort(Table tab[]) {
 
 
    if (tab[0].name > tab[1].name) {
        swap(tab[0], tab[1]);
 
    }
 
    if (tab[0].name > tab[2].name) {
        swap(tab[0], tab[2]);
 
    }
 
    if (tab[1].name > tab[2].name) {
        swap(tab[1], tab[2]);
 
    }
 
}
 
void print(Table tab[]) {
       printf("-----------------------------------------------------------------\n");
       printf("|Ведомомсть комплектующих                                        |\n");
       printf("|----------------------------------------------------------------|\n");
       printf("|     Обозначение    |    Тип    |  Номинал         | Количество |\n");
       printf("|--------------------|-----------|------------------|------------|\n");
        for (int i = 0; i < N; i++){
             cout << "|";
             cout.width(20);
             cout << tab[i].oboz;
             printf("|   %c       |  %-10.1d      | %9lg  |\n",
                     tab[i].type, tab[i].name, tab[i].am);
         }
        printf("|----------------------------------------------------------------|\n");
        printf("| Примечание: R - резистор, C - конденсатор                      |\n");
        printf("------------------------------------------------------------------\n");
        cout << "\n\n\n\n";

    }

 
int main() {
 
    srand(time(NULL));

 
    int action = 0;
    while (true) {
 
        for (int i = 0; i < 1; i++) {
 
            cout << "Каким образом вы хотите заполнить таблицы, 1 - случайным образом, 2 - вводя с клвиатуры: ";
            cin >> action;
 
            if (action == 1) {
                random(tab);
                sort(tab);
                print(tab);
            }
            else if (action == 2) {
                in(tab);
                sort(tab);
                print(tab);
            }
            
        }
 
    }
 
 
 
    return 0;
}
