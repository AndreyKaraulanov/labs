#include "lab.hpp"
#include <iostream>
Node * head = nullptr;
Node* tail = nullptr;

int main()
{
    srand(time(0));
    short a;
    short b;
    while (1) {
        cout << "\n (1) - Создать список\n (2) - Печать списка\n  (3) - Добавление элемента \n (4) - Удаение любого элемента \n (5) - Сортировка\n (6) - Запись списка в файл\n (7) - Создание нового списка из файла\n (8) - Очистить список \n (0) - Выхаод \n -->";
        cin >> a;
        switch (a) {
        case 1:
            FreeList();
            system("cls");
            //cout << "\n 1 - Ввести самому\n 2 - Случайным образом\n -->";
            
                
            CreateListConsole();
            
            system("cls");
            cout << endl << "Список создан!" << endl;;
            break;
        case 2:
            system("cls");
            if (!checkNULL()) break;
            cout << "\n 1 - С начала\n 2 - С конца\n 3 - Назад\n -->";
            cin >> b;
            system("cls");
            if (b == 1)PrintList();
            else if (b == 2)PrintListReverse();
            break;
        
        case 3:
            system("cls");
            if (!checkNULL()) break;
            cout << "\n 1 - Добавить информацию в начало\n 2 - В конец\n 3 - Назад\n -->";
            cin >> b;
            if (b == 1) {
                AddTermBegin();
                system("cls");
                cout << "Информация добавлена." << endl;
            }
            else if (b == 2) {
                AddTermEnd();
                system("cls");
                cout << "Информация добавлена." << endl;
            }
            else {
                system("cls");
            }
            break;
        case 4:
            system("cls");
            if (!checkNULL()) break;
                cout << "\n 1 - Удалить информацию из начала\n 2 - Удалить информацию из конца\n 3 - Назад\n -->";
            cin >> b;
            if (b == 1) {
                DeleteTermBegin();
                system("cls");
                cout << "Информация удалена." << endl;
            }
            else if (b == 2) {
                DeleteTermEnd();
                system("cls");
                cout << "Информация удалена." << endl;
            }
            else {
                system("cls");
                break;
            }
            break;
        case 5:
            system("cls");
            if (!checkNULL()) break;
            SaveInFile();
            break;
        case 6:
            system("cls");
            FreeList();
            LoadFromFile();
            break;
        case 7:
            system("cls");
            if (!checkNULL()) break;
            FreeList();
            break;
        case 0:
            system("cls");
            FreeList();
            exit(0);
            break;
        default:
            system("cls");
            cout << " \t\t\tОшибка! " << endl;
            break;
        }
    }
}
