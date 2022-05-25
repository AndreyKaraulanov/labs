#include "lab.hpp"

int main()
{
    
    srand(time(NULL));
    Node* begin = NULL;
    short a;
    short b;
    while (1) {
        cout << "\n 1 - Create list\n 2 - Print list\n 3 - Find entry\n 4 - Add information \n 5 - Delete information \n 6 - Sort \n 7 - Save list \n 8 - Load list \n 9 - Clean up list \n 0 - Exit \n -->";
        cin >> a;
        switch (a) {
        case 1:
            FreeList(&begin);
            system("cls");
            cout << "\n 1 - Input by console\n 2 - Random input\n -->";
            cin >> b;
            if (b == 1) {
                begin = CreateListConsole();
            }
            else if (b == 2) {
                begin = CreateListRandom();
            }
            else {
                cout << " \t\t\tIncorrect input! ERROR! " << endl;
            }
            system("cls");
            cout << endl << "List created successfully" << endl;
            break;
        case 2:
            system("cls");
            if (!checkNULL(begin)) break;
            PrintList(begin);
            break;
        case 3:
            system("cls");
            if (!checkNULL(begin)) break;
            cout << "\n 1 - Searching by denomination\n 2 - Searching by type\n 3 - Searching by quantity\n 4 - Searching by weight\n -->";
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
                cout << " \t\t\tIncorrect input! ERROR! " << endl;
                break;
            }
            break;
        case 4:
            system("cls");
            if (!checkNULL(begin)) break;
            cout << "\n 1 - Add information at the beginning\n 2 - Add information at the end\n 3 - Add information by tag\n 4 - Back\n -->";
            cin >> b;
            if (b == 1) {
                AddTermBegin(&begin);
                system("cls");
                cout << "Information has been successfully added." << endl;
            }
            else if (b == 2) {
                AddTermEnd(begin);
                system("cls");
                cout << "Information has been successfully added." << endl;
            }
            else if (b == 3) {
                AddTermTag(begin);
            }
            else {
                system("cls");
            }
            break;
        case 5:
            system("cls");
            if (!checkNULL(begin)) break;
            cout << "\n 1 - Delete information from the beginning\n 2 - Delete information from the end\n 3 - Delete information by tag\n 4 - Back\n -->";
            cin >> b;
            if (b == 1) {
                DeleteTermBegin(&begin);
                system("cls");
                cout << "Information has been successfully deleted." << endl;
            }
            else if (b == 2) {
                DeleteTermEnd(&begin);
                system("cls");
                cout << "Information has been successfully deleted." << endl;
            }
            else if (b == 3) {
                RemoveTermTag(&begin);
            }
            else {
                system("cls");
                break;
            }
            break;
        case 6:
            system("cls");
            if (!checkNULL(begin)) break;
            cout << "\n 1 - Sort by denomination\n 2 - Sort by type\n 3 - Sort by quantity\n 4 - Sort by weight\n 5 - back -->";
            cin >> b;
            SortTerm(begin, b);
            cout << "List sorted." << endl;
            break;
        case 7:
            system("cls");
            if (!checkNULL(begin)) break;
            SaveInFile(begin);
            break;
        case 8:
            system("cls");
            FreeList(&begin);
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
            cout << " \t\t\tIncorrect input! ERROR! " << endl;
            break;
        }
    }
}
