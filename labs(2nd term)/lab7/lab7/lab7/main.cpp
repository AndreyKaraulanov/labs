#include <iostream>
#include "lab.hpp"

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    Table tab;
    int menu_button;
        while (true) {

            cout << " 1 - Добавить запись в начало файла, 2 - Добавить запись в конец файла, 3 - Ввод случайным образом и запись в файл, 4 - Чтение всех структур последователдьно из файла и печать, 5 – Ввод с экрана и запись в файл, 6 - Печать одной записи из файла по номеру 0 - выход ";
            cin >> menu_button;

            if (menu_button == 1) {
                input_forvardlist(tab);
            }
            if (menu_button == 2) {
                input_backlist(tab);
            }
            if (menu_button == 3) {
                random(tab);
            }
            if (menu_button == 4) {
                print_all(tab);
            }
            if (menu_button == 5) {
                print(tab);
            }
            if (menu_button == 6) {
                listNumberPrint(tab);
            }
            if (menu_button == 0) {
                delete [] tab.oboz;
                exit(0);
            }

        }

        
    return 0;
}
