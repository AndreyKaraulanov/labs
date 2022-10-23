#include "lab.hpp"

int main()
{
    
    srand(time(NULL));
    Node* begin = NULL;
    short a;
    short b;
    while (1) {
        cout << "\n (1) - Создать список\n (2) - Печать списка\n (4) - Добавление элемента \n (5) - Удаение любого элемента \n (7) - Запись списка в файл\n (8) - Создание нового списка из файла\n (9) - Очистить список \n (0) - Exit \n -->";
        cin >> a;
        switch (a) {
        case 1:
            FreeList(&begin);
            system("cls");
            cout << "\n 1 - Ввести самому\n 2 - Случайным образом\n -->";
            cin >> b;
            if (b == 1) {
                begin = CreateListConsole();
            }
            else if (b == 2) {
                begin = CreateListRandom();
            }
            else {
                cout << " \t\t\tОшибка" << endl;
            }
            system("cls");
            cout << endl << "Список создан!" << endl;
            break;
        case 2:
            system("cls");
            if (!checkNULL(begin)) break;
            PrintList(begin);
            break;
        
        case 4:
            system("cls");
            if (!checkNULL(begin)) break;
            cout << "\n 1 - Добавить в начало\n 2 - В конец\n 3 - Назад\n -->";
            cin >> b;
            if (b == 1) {
                AddTermBegin(&begin);
                system("cls");
                cout << "Информация добавлена." << endl;
            }
            else if (b == 2) {
                AddTermEnd(begin);
                system("cls");
                cout << "Информация добавлена." << endl;
            }
            else {
                system("cls");
            }
            break;
        case 5:
            system("cls");
            if (!checkNULL(begin)) break;
            cout << "\n 1 - Удалить c начала\n 2 - Удалить c конца\n 3 - Назад\n -->";
            cin >> b;
            if (b == 1) {
                DeleteTermBegin(&begin);
                system("cls");
                cout << "Информация удалена." << endl;
            }
            else if (b == 2) {
                DeleteTermEnd(&begin);
                system("cls");
                cout << "Информация удалена." << endl;
            }
            else {
                system("cls");
                break;
            }
            break;
        case 7:
            system("cls");
            if (!checkNULL(begin)) break;
            SaveInFile(begin);
            break;
        case 8:
            system("cls");
            //FreeList(&begin);
            begin = LoadFromFile();
            break;
        case 9:
            system("cls");
            if (!checkNULL(begin)) break;
            FreeList(&begin);
            break;
        case 0:
            system("cls");
            FreeList(&begin);
            exit(0);
            break;
        default:
            system("cls");
            cout << " \t\t\tОшибка!" << endl;
            break;
        }
    }
}

