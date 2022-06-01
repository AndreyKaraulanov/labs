#include "lab.hpp"

int main()
{
    
    srand(time(NULL));
    Node* begin = NULL;
    short a;
    short b;
    while (1) {
        cout << "\n (1) - Создать список\n (2) - Печать списка\n (3) - Поиск по критерию\n (4) - Добавление элемента \n (5) - Удаение любого элемента \n (6) - Сортировка\n (7) - Запись списка в файл\n (8) - Создание нового списка из файла\n (9) - Очистить список \n (0) - Exit \n -->";
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
        case 3:
            system("cls");
            if (!checkNULL(begin)) break;
            cout << "\n 1 - Поиск по обозначению\n 2 - Поиск по типу\n 3 - Поиск по номиналу\n 4 - Поиск по количеству\n -->";
            cin >> b;
            system("cls");
            switch (b)
            {
            case 1:
                SearchByDenomination(begin);
                break;
            case 2:
                SearchByType(begin);
                break;
            case 3:
                SearchByQuantity(begin);
                break;
            case 4:
                SearchByWeight(begin);
                break;
            default:
                cout << " \t\t\tОшибка!" << endl;
                break;
            }
            break;
        case 4:
            system("cls");
            if (!checkNULL(begin)) break;
            cout << "\n 1 - Добавить информацию в начало\n 2 - В конец\n 3 - Назад\n -->";
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
            cout << "\n 1 - Удалить информацию из начала\n 2 - Удалить информацию из конца\n 3 - Назад\n -->";
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
        case 6:
            system("cls");
            if (!checkNULL(begin)) break;
            cout << "\n 1 - Сортировка по обозначению\n 2 - Сортировка по типу\n 3 - Сортировка по номиналу\n 4 - Сортировка по количеству\n 5 - назад -->";
            cin >> b;
            SortTerm(begin, b);
            cout << "Список отсортирован." << endl;
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

