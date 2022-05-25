#include "lab.hpp"
Node* CreateListConsole() { // user`s input

    Node* current, * begin, * previous;
    begin = previous = current = new Node;

        cout << 1 << ") Enter: name, type, quantity, weight \n --> ";
        cin >> current->name >> current->type >> current->count >> current->weight;
        for (size_t i = 0; i < 2; ++i) {
            current = new Node;
            cout << i+2 << ") Enter: name, type, quantity, weight \n --> ";
            cin >> current->name >> current->type >> current->count >> current->weight;
            previous->next = current;
            previous = current;
        }


    previous->next = NULL;
    return begin;



}


Node* CreateListRandom() { // randomize the information

    Node* current, * begin, * previous;
    begin = previous = current = new Node;


    char letters[] = { 'O', 'P' ,'B' };
    static char name_rand[3][20] = { "Flange", "Adapter", "Entablature" };



    int choose;
    cout << "How many random sets you want to create? ->  ";
    cin >> choose;



    current->name = name_rand[rand() % 3];
    current->type = letters[rand() % 3];
    current->count = rand() + 1;
    current->weight = rand() + 10.0;

    for (size_t i = 0; i < choose-1; ++i) {
        current = new Node;
        current->name = name_rand[rand() % 3];
        current->type = letters[rand() % 3];
        current->count = rand() + 1;
        current->weight = rand() + 10.0;
        previous->next = current;
        previous = current;
    }


    previous->next = NULL;
    return begin;

}




void PrintList(Node* begin) { // print list table information

    Node* current;
    cout << "---------------------------------------------------\n";
    cout << "|                 Parts sheet                      |\n";
    cout << "|--------------------------------------------------|\n";
    cout << "|Denomination|  Type |  Quantity  |Weight one of(g)|\n";
    cout << "|------------|-------|------------|----------------|\n";
    current = begin;
    while (current) {
        printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->count, current->weight);
        current = current->next;
    }
    cout << "----------------------------------------------------\n";
    cout << "|Note: the following type encoding is accepted:    | \n";
    cout << "|   O - original, P - purchased, B - borrowed      | \n";
    cout << "---------------------------------------------------\n";
    cout << "\n\n\n\n";

}





void SearchByDenomination(Node* begin) { // searching by name

    Node* current = begin;
    char* nameSearch = new char[15];
    short count = 0;
    cout << "Enter the denomination detail: ";
    cin >> nameSearch;
    cout << "---------------------------------------------------\n";
    cout << "|                 Parts sheet                      |\n";
    cout << "|--------------------------------------------------|\n";
    cout << "|Denomination|  Type |  Quantity  |Weight one of(g)|\n";
    cout << "|------------|-------|------------|----------------|\n";
    while (current) {
        if (strcmp(current->name, nameSearch) == 0) {
            printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->count, current->weight);
            count++;
        }
        current = current->next;
    }
    cout << "----------------------------------------------------\n";
    cout << "|Note: the following type encoding is accepted:    | \n";
    cout << "|   O - original, P - purchased, B - borrowed      | \n";
    cout << "---------------------------------------------------\n";
    if (count > 0)
        cout << "Total Found: " << count << endl;
    else {
        system("cls");
        cout << endl << "Not found" << endl;
    }
    delete[]nameSearch;

}




void SearchByType(Node* begin) { // searhing by type

    Node* current = begin;
    char typeSearch;
    short count = 0;
    cout << "Enter a type of detail: ";
    cin >> typeSearch;
    cout << "---------------------------------------------------\n";
    cout << "|                 Parts sheet                      |\n";
    cout << "|--------------------------------------------------|\n";
    cout << "|Denomination|  Type |  Quantity  |Weight one of(g)|\n";
    cout << "|------------|-------|------------|----------------|\n";
    while (current) {
        if (current->type == typeSearch) {
            printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->count, current->weight);
            count++;
        }
        current = current->next;
    }
    cout << "----------------------------------------------------\n";
    cout << "|Note: the following type encoding is accepted:    | \n";
    cout << "|   O - original, P - purchased, B - borrowed      | \n";
    cout << "---------------------------------------------------\n";
    if (count > 0)
        cout << "Total Found: " << count << endl;
    else {
        system("cls");
        cout << endl << "Not found" << endl;
    }

}




void SearchByQuantity(Node* begin) { // searhing by count

    Node* current = begin;
    int quantitySearch;
    short count = 0;
    cout << "Enter quantity of details: ";
    cin >> quantitySearch;
    cout << "---------------------------------------------------\n";
    cout << "|                 Parts sheet                      |\n";
    cout << "|--------------------------------------------------|\n";
    cout << "|Denomination|  Type |  Quantity  |Weight one of(g)|\n";
    cout << "|------------|-------|------------|----------------|\n";
    while (current) {
        if (current->count == quantitySearch) {
            printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->count, current->weight);
            count++;
        }
        current = current->next;
    }
    cout << "----------------------------------------------------\n";
    cout << "|Note: the following type encoding is accepted:    | \n";
    cout << "|   O - original, P - purchased, B - borrowed      | \n";
    cout << "---------------------------------------------------\n";
    if (count > 0)
        cout << "Total Found: " << count << endl;
    else {
        system("cls");
        cout << endl << "Not found" << endl;
    }

}





void SearchByWeight(Node* begin) { // searhing by weigth

    Node* current = begin;
    float weightSearch;
    short count = 0;
    cout << "Enter details` weight: ";
    cin >> weightSearch;
    cout << "---------------------------------------------------\n";
    cout << "|                 Parts sheet                      |\n";
    cout << "|--------------------------------------------------|\n";
    cout << "|Denomination|  Type |  Quantity  |Weight one of(g)|\n";
    cout << "|------------|-------|------------|----------------|\n";
    while (current) {
        if (current->weight == weightSearch) {
            printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->count, current->weight);
            count++;
        }
        current = current->next;
    }
    cout << "----------------------------------------------------\n";
    cout << "|Note: the following type encoding is accepted:    | \n";
    cout << "|   O - original, P - purchased, B - borrowed      | \n";
    cout << "---------------------------------------------------\n";
    if (count > 0)
        cout << "Total Found: " << count << endl;
    else {
        system("cls");
        cout << endl << "Not found" << endl;
    }

}






void AddTermBegin(Node** begin) { // adding new item in the beginning of the list

    Node* current = new Node;
    cout << ") Enter: name, type, quantity, weight \n --> ";
    cin >> current->name >> current->type >> current->count >> current->weight;
    current->next = *begin;
    *begin = current;

}
void DeleteTermBegin(Node** begin) {  // delete from the beginnng of list

    Node* current = *begin;
    *begin = current->next;
    delete current;

}



void AddTermEnd(Node* begin) { // adding new item in the end of the list

    Node* current = begin, * previous = NULL;
    while (current)
    {
        previous = current;
        current = current->next;
    }
    current = new Node;
    cout << ") Enter: name, type, quantity, weight \n --> ";
    cin >> current->name >> current->type >> current->count >> current->weight;
    previous->next = current;
    current->next = NULL;
}
void DeleteTermEnd(Node** begin) { // delete from the end of list
    Node* current = *begin, * previous = NULL;
    while (current->next) {
        previous = current;
        current = current->next;
    }
    if (previous == NULL) {
        DeleteTermBegin(begin);
        return;
    }
    previous->next = NULL;
    delete current;

}





void AddTermTag(Node* begin) { // inserting item

    Node* current = begin, * previous = current;

    char* NumberTag = new char[15];
    cout << "Enter the previous denomination detail that will be before your`s ->  "; // item that will be the previous
    cin >> NumberTag;

    while (current) {
        if (strcmp(previous->name, NumberTag) == 0) { // searich previous
            current = new Node;
            current->next = previous->next;
            previous->next = current;
            cout << ") Enter: name, type, quantity, weight \n --> "; // insert item
            cin >> current->name >> current->type >> current->count >> current->weight;
            system("cls");
            cout << "Information has been successfully added." << endl;
            return;
        }
        previous = current;            // inserting
        current = current->next;
    }
    if (strcmp(previous->name, NumberTag) == 0) { // searich previous
        current = new Node;
        cout << ") Enter: name, type, quantity, weight \n --> ";
        cin >> current->name >> current->type >> current->count >> current->weight; // insert item
        previous->next = current;  // inserting
        current->next = NULL;
        return;
    }
    system("cls");
    cout << "\n ERROR! \n";
    delete[] NumberTag;

}




void RemoveTermTag(Node** begin) { // remove inserted item

    Node* current = *begin, * previous = NULL;

    char* NumberTag = new char[15];
    cout << "Enter the denomination detail ->  ";
    cin >> NumberTag;

    if (strcmp(current->name, NumberTag) == 0) {
        DeleteTermBegin(begin);
        system("cls");
        cout << "Information has been successfully deleted." << endl;
        return;
    }
    while (current) {
        if (strcmp(current->name, NumberTag) == 0) {
            previous->next = current->next;
            delete current;
            system("cls");
            cout << "Information has been successfully deleted." << endl;
            return;
        }
        else {
            previous = current;
            current = current->next;
        }
    }
    system("cls");
    cout << "\n ERROR! \n " << endl;
    delete[] NumberTag;

}








void SortTerm(Node* begin, int set)  { // sorting information
    Node* left = begin;
    Node* right = begin->next;
    Node* temp = new Node;



    // preset switch
    switch (set) {

        case 1: // sort by name
            while (left->next) {

                while (right) {

                    if ((strcmp(left->name, right->name) > 0)) {

                        strcpy(temp->name, left->name);
                        strcpy(left->name, right->name);
                        strcpy(right->name, temp->name);

                    }
                    right = right->next;

                }

                left = left->next;
                right = left->next;
            }
            break;
        case 2: // sort by type
            while (left->next) {

                while (right) {

                    if (left->type > right->type) {

                        temp->type = left->type;
                        left->type = right->type;
                        right->type = temp->type;

                    }
                    right = right->next;

                }

                left = left->next;
                right = left->next;
            }
            break;
        case 3: // sort by count
            while (left->next) {

                while (right) {

                    if (left->count > right->count) {

                        temp->count = left->count;
                        left->count = right->count;
                        right->count = temp->count;

                    }
                    right = right->next;

                }

                left = left->next;
                right = left->next;
            }
            break;
        case 4: // sort by weight
            while (left->next) {

                while (right) {

                    if (left->weight > right->weight) {

                        temp->weight = left->weight;
                        left->weight = right->weight;
                        right->weight = temp->weight;

                    }
                    right = right->next;

                }

                left = left->next;
                right = left->next;
            }
            break;
        default:
            system("cls");
            break;

    }




    


    

    

}





void SaveInFile(Node* begin) { // writing in data.txt

    Node* current = begin;
    FILE* data;
    data = fopen("data.txt", "w");
    if (!data) {
        cout << "ERROR. Missing data.txt" << endl;
    }
    while (current)
    {
        fprintf(data, "%s\t%c\t%d\t%lg\n", current->name, current->type, current->count, current->weight);
        current = current->next;
    }
    cout << "File has been successfully saved." << endl;
    fclose(data);

}





Node* LoadFromFile() { // reading from data.txt

    Node* current, * begin, * previous;
    previous = current = begin = new Node;
    FILE* data;
    data = fopen("data.txt", "r");
    if (!data) {
        cout << "ERROR. Missing data.txt";
        return NULL;
    }
    if (fgetc(data) == EOF) {
        cout << "File is empty.";
        return NULL;
    }
    fscanf(data, "%s%s%d%f", &current->name, &current->type, &current->count, &current->weight);
    while (!feof(data)) {
        current = new Node;
        fscanf(data, "%s%s%d%f", &current->name, &current->type, &current->count, &current->weight);
        previous->next = current;
        previous = current;
    }
    current->next = NULL;
    cout << "File has been successfully saved." << endl;
    fclose(data);
    return begin;
}





void FreeList(Node** begin) { // clean list
    Node* current = *begin;
    while (current){
        *begin = (*begin)->next;
        free(current);
        current = *begin;
    }
}
bool checkNULL(Node* begin) { // cheking on empty
    if (begin == NULL) {
        cout << "List is empty.";
        return 0;
    }
    return 1;
}
