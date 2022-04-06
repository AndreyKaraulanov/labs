#include "struct.hpp"


void in(Table tab[]) {


    for (int i = 0; i < N; ++i) {

        cout << "Для " << i + 1 << " строки введите: обозначение , тип , номинал , количество: ";
        cin >> tab[i].oboz >> tab[i].type >> tab[i].name >> tab[i].am;

    }

}

void random(Table tab[]) {


    char letters[] = { 'R', 'R' ,'C' };
    static string name_rand[] = { "RT-11-24", "RT-11-24", "CGU-12K" };
    for (int i = 0; i < N; i++) {
        tab[i].oboz = name_rand[rand() % 3];
        tab[i].type = letters[rand() % 3];
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
