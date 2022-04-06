#include "struct.hpp"

int main() {

    srand(time(NULL));


    Table tab[4];


    int menu;
    while (true) {
       
#ifdef DEBUG
        cout << __DATE__ << endl;
        cout << __TIME__ << endl;
#else
        cout << __func__ << endl;
        cout << __FILE__ << endl;
#endif

        cout << " 1 - Ввод 2 – сортировка, 3 – печать, 0 - завершить роботу ";
        cin >> menu;

        if (menu == 1) {

#ifndef PRINT_TYPE
            in(tab);
#else
            random(tab);
#endif
        }
        else if (menu == 2) {
            sort(tab);
            
        }
        else if (menu == 3) {
            system("cls");
            print(tab);
            
        }
        else if (menu == 0) {
            exit(0);
        }

    }



    return 0;
}
