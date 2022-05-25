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
        cout << "\n 1 - Create list\n 2 - Print list\n 3 - Find entry\n 4 - Add information \n 5 - Delete information \n 6 - Sort \n 7 - Save list \n 8 - Load list \n 9 - Clean up list \n 0 - Exit \n -->";
        cin >> a;
        switch (a) {
        case 1:
            FreeList();
            system("cls");
            cout << "\n 1 - Input by console\n 2 - Random input\n -->";
            cin >> b;
            if (b == 1) {
                CreateListConsole();
            }
            else if (b == 2) {
                CreateListRandom();
            }
            else {
                cout << " \t\t\tIncorrect input! ERROR! " << endl;
            }
            system("cls");
            cout << endl << "List created successfully" << endl;
            break;
        case 2:
            system("cls");
            if (!checkNULL()) break;
            cout << "\n 1 - starting from the beginning\n 2 - starting from the end\n 3 - Back\n -->";
            cin >> b;
            system("cls");
            if (b == 1)PrintList();
            else if (b == 2)PrintListReverse();
            break;
        case 3:
            system("cls");
            if (!checkNULL()) break;
            cout << "\n 1 - Searching from the beginning of the list \n 2 - Searching from the end of the list\n";
            cin >> b;
            if (b == 1) {
                cout << "\n 1 - Searching by denomination\n 2 - Searching by type\n 3 - Searching by quantity\n 4 - Searching by weight\n -->";
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
                cout << "\n 1 - Searching by denomination\n 2 - Searching by type\n 3 - Searching by quantity\n 4 - Searching by weight\n -->";
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
            cout << "\n 1 - Add information at the beginning\n 2 - Add information at the end\n 3 - Add information by tag\n 4 - Back\n -->";
            cin >> b;
            if (b == 1) {
                AddTermBegin();
                system("cls");
                cout << "Information has been successfully added." << endl;
            }
            else if (b == 2) {
                AddTermEnd();
                system("cls");
                cout << "Information has been successfully added." << endl;
            }
            else if (b == 3) {
                AddTermTag();
            }
            else {
                system("cls");
            }
            break;
        case 5:
            system("cls");
            if (!checkNULL()) break;
            cout << "\n 1 - Delete information from the beginning\n 2 - Delete information from the end\n 3 - Delete information by tag\n 4 - Back\n -->";
            cin >> b;
            if (b == 1) {
                DeleteTermBegin();
                system("cls");
                cout << "Information has been successfully deleted." << endl;
            }
            else if (b == 2) {
                DeleteTermEnd();
                system("cls");
                cout << "Information has been successfully deleted." << endl;
            }
            else if (b == 3) {
                RemoveTermTag();
            }
            else {
                system("cls");
                break;
            }
            break;
        case 6:
            system("cls");
            if (!checkNULL()) break;
            cout << "\n 1 - Sort by denomination\n 2 - Sort by type\n 3 - Sort by quantity\n 4 - Sort by weight\n 5 - back -->";
            cin >> b;
            SortTerm(b);
            cout << "List sorted." << endl;
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
            cout << " \t\t\tIncorrect input! ERROR! " << endl;
            break;
        }
    }
}
