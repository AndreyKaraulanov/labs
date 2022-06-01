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
        cout << "\n (1) - Создать список\n (2) - Печать списка\n (3) - Поиск по критерию\n (4) - Добавление элемента \n (5) - Удаение любого элемента \n (6) - Сортировка\n (7) - Запись списка в файл\n (8) - Создание нового списка из файла\n (9) - Очистить список \n (0) - Выхаод \n -->";
        cin >> a;
        switch (a) {
        case 1:
            FreeList();
            system("cls");
                cout << "\n 1 - Ввести самому\n 2 - Случайным образом\n -->";
            cin >> b;
            if (b == 1) {
                CreateListConsole();
            }
            else if (b == 2) {
                CreateListRandom();
            }
            else {
                cout << endl << "Список создан!" << endl;
            }
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
            cout << "\n 1 - Поиск с начала \n 2 - Поиск с конца\n";
            cin >> b;
            if (b == 1) {
                cout << "\n 1 - Поиск по обозначению\n 2 - Поиск по типу\n 3 - Поиск по номиналу\n 4 - Поиск по количеству\n -->";
                cin >> b;
                system("cls");
                switch (b)
                {
                case 1:
                    SearchByDenomination(head);
                    break;
                case 2:
                    SearchByType(head);
                    break;
                case 3:
                    SearchByQuantity(head);
                    break;
                case 4:
                    SearchByWeight(head);
                    break;
                default:
                    cout << " \t\t\tIncorrect input! ERROR! " << endl;
                    break;
                }
            }
            else {
                cout << "\n 1 - Поиск по обозначению\n 2 - Поиск по типу\n 3 - Поиск по номиналу\n 4 - Поиск по количеству\n -->";
                cin >> b;
                system("cls");
                switch (b)
                {
                case 1:
                    SearchByDenomination(tail);
                    break;
                case 2:
                    SearchByType(tail);
                    break;
                case 3:
                    SearchByQuantity(tail);
                    break;
                case 4:
                    SearchByWeight(tail);
                    break;
                default:
                    cout << " \t\t\tIncorrect input! ERROR! " << endl;
                    break;
                }
            }
            break;
        case 4:
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
        case 5:
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
        case 6:
            system("cls");
            if (!checkNULL()) break;
            cout << "\n 1 - Сортировка по обозначению\n 2 - Сортировка по типу\n 3 - Сортировка по номиналу\n 4 - Сортировка по количеству\n 5 - назад -->";
            cin >> b;
            SortTerm(b);
            cout << "Список отсортирован" << endl;
            break;
        case 7:
            system("cls");
            if (!checkNULL()) break;
            SaveInFile();
            break;
        case 8:
            system("cls");
            FreeList();
            LoadFromFile();
            break;
        case 9:
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
