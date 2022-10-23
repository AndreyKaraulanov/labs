#include <iostream>
#include "lab.hpp"
int main()
{
    srand(time(NULL));

    DList* Dhead = NULL;
    DList* Dtail = NULL;
    Node* head = NULL;
    Node* begin = NULL;
    

    short int count, nodeSelect, index1, index2, pos;

    while (true) {
        cout << "Какой список вы хотите создать:: \nОдносязный - 1 \nДвусвязный - 2 \n \nВыход - 0 \n---> "; cin >> nodeSelect;
        inputCheker();
        switch (nodeSelect)
        {
            
        case 1:
            while (nodeSelect != 0) {
                system("cls");
                if (head == NULL) {
                    cout << "Насколько элементов вы хотите создать список? \n---> "; cin >> count;
                    //inputCheker();
                    CreateNodeConsole(count, &head);
                    system("pause");
                    system("cls");
                }
                PrintNode(head);
                cout << "Выберите операцию: \nДобавить новый элемент - 1 \nПодсчитать кол-во элементов - 2 \nПоменять местами два элемента - 3 \nУдалить один элемент - 4 \nСоединить два списка - 5 \nОчистить список - 6 \nПечать - 7\n Сохранить в файл - 8\n Загрузить из файла - 9 \nНазад - 0 \n---> "; cin >> nodeSelect;
                //inputCheker();
                switch (nodeSelect)
                {
                case 1:
                    system("cls");
                    PrintNode(head);
                    cout << "Выберите позицию \n---> "; cin >> pos;
                    if (pos > CountOfNode(head) + 1) {
                        cout << "Это слишком далеко!" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    Insert(head, pos - 1);
                    PrintNode(head);
                    system("pause");
                    system("cls");
                    break;

                case 2:
                    system("cls");
                    cout << "Кол-во элементов: " << CountOfNode(head) << "\n";
                    system("pause");
                    system("cls");
                    break;

                case 3:
                    system("cls");
                    PrintNode(head);
                    cout << "Индекс первого элемента: "; cin >> index1;
                    cout << "Индекс второго элемента: "; cin >> index2;
                    SwapNode(index1, index2, head);
                    PrintNode(head);
                    system("pause");
                    system("cls");
                    break;

                case 4:
                    system("cls");
                    PrintNode(head);
                    cout << "Выберите позицию выбраного элемента \n---> "; cin >> pos;
                    Delete(&head, pos);
                    PrintNode(head);
                    system("pause");
                    system("cls");
                    break;
                case 5:
                    system("cls");
                    cout << "Насколько элементов вы хотите создать список? \n---> "; cin >> count;
                    CreateNodeConsole(count, &begin);
                    cout << "Ваш новый список: ";
                    Split(&head, &begin);
                    PrintNode(head);
                    system("pause");
                    system("cls");
                    break;

                case 6:
                    system("cls");
                    FreeNode(&head);
                    FreeNode(&begin);
                    cout << "Список пуст!!\n";
                    system("pause");
                    system("cls");
                    nodeSelect = 0;
                    break;
                case 7:
                    system("cls");
                    cout << "Ваш список: ";
                    PrintNode(head);
                    break;
                case 8:
                        cout<<"файл сохранен";
                case 9:
                        system("cls");
                        LoadFromFile(&head);
                        system("pause");
                        break;
                case 0:
                    system("cls");
                    break;

                default:
                    system("cls");
                    cout << " \t\t\tНеверный ввод! " << endl;
                    break;
                }
            }
            break;


            
        case 2:
            system("cls");
            while (nodeSelect != 0) {
                system("cls");
                if (Dhead == NULL) {
                    cout << "Насколько элементов вы хотите создать список? \n---> "; cin >> count;
                    //inputCheker();
                    CreateDListConsole(count, &Dhead, Dtail);
                    system("pause");
                    system("cls");
                }
                PrintDlist(Dhead);
                cout << "Выберите операцию: \nДобавить новый элемент - 1 \nПодсчитать кол-во элементов - 2 \nПоменять местами два элемента - 3 \nУдалить один элемент - 4 \nОчистить список - 5 \nПечать - 6 \n Сохранить в файл - 7 \n Загрузить из файла - 8 \nНазад - 0 \n---> "; cin >> nodeSelect;
                //inputCheker();
                switch (nodeSelect)
                {
                case 1:
                    system("cls");
                    PrintDlist(Dhead);
                    cout << "Выберите позицию \n---> "; cin >> pos;
                    if (pos > CountOfDlist(Dhead) + 1) {
                        cout << "Это слишком далеко!" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    DInsert(&Dhead, &Dtail, pos - 1);
                    PrintDlist(Dhead);
                    system("pause");
                    system("cls");
                    break;

                case 2:
                    system("cls");
                    cout << "Кол-во элементов: " << CountOfDlist(Dhead) << "\n";
                    system("pause");
                    system("cls");
                    break;

                case 3:
                    system("cls");
                    PrintDlist(Dhead);
                    cout << "Индекс первого элемента: "; cin >> index1;
                    cout << "Индекс второго элемента: "; cin >> index2;
                    SwapDlsit(index1, index2, Dhead);
                    PrintDlist(Dhead);
                    system("pause");
                    system("cls");
                    break;

                case 4:
                    system("cls");
                    PrintDlist(Dhead);
                    cout << "Выберите позицию выбраного элемента \n---> "; cin >> pos;
                    DeleteDlist(&Dhead, &Dtail, pos-1);
                    PrintDlist(Dhead);
                    system("pause");
                    system("cls");
                    break;
                case 5:
                    system("cls");
                    FreeDlist(&Dhead);
                    cout << "Список пуст!!\n";
                    system("pause");
                    system("cls");
                    nodeSelect = 0;
                    break;
                case 6:
                    system("cls");
                    cout << "Ваш список: ";
                    PrintDlist(Dhead);
                    break;
                case 7:
                        cout<<"файл сохранен";
                case 8:
                        system("cls");
                        LoadFromFileDlist(&Dhead, &Dtail);
                        system("pause");
                        break;
                case 0:
                    system("cls");
                    break;
                
                default:
                    system("cls");
                    cout << " \t\t\tНеверный ввод! " << endl;
                    break;
                }
            }


            break;

        case 0:
            system("cls");
            FreeDlist(&Dhead);
            FreeNode(&head);
            FreeNode(&begin);
            exit(0);
            break;

        default:
            system("cls");
            cout << " \t\t\tНеверный ввод! " << endl;
            break;
        }
        
    }
    return 0;}
