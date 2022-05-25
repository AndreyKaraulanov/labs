#include "lab.hpp"

extern Node* head, * tail;

void CreateListConsole() { // user`s input
    Node* current, * previous;
    head = previous = current = new Node;

    short n = 0;
    cout << 1 << ") Enter: name, type, quantity, weight \n --> ";
    current->prev = nullptr;
    cin >> current->name >> current->type >> current->count >> current->weight;
    for (size_t i = 0; i < 2; ++i) {

        current = new Node;
        cout << i + 2 << ") Enter: name, type, quantity, weight \n --> ";
        cin >> current->name >> current->type >> current->count >> current->weight;
        previous->next = current;
        current->prev = previous;
        previous = current;

    }
    tail = current;
    previous->next = NULL;
}




void CreateListRandom() { // randomize the information
    Node* current, * previous;
    head = previous = current = new Node;

    char letters[] = { 'O', 'P' ,'B' };
    static char name_rand[3][20] = { "Flange", "Adapter", "Entablature" };



    int choose;
    cout << "How many random sets you want to create? ->  ";
    cin >> choose;



    current->name = name_rand[rand() % 3];
    current->type = letters[rand() % 3];
    current->count = rand() + 1;
    current->weight = rand() + 10.0;
    current->prev = NULL;

    for (size_t i = 0; i < choose - 1; ++i) {
        current = new Node;
        current->name = name_rand[rand() % 3];
        current->type = letters[rand() % 3];
        current->count = rand() + 1;
        current->weight = rand() + 10.0;
        previous->next = current;
        previous = current;
    }

    tail = current;
    previous->next = NULL;

}



void PrintList() { // print list table information

    Node* current;
    cout << "---------------------------------------------------\n";
    cout << "|                 Parts sheet                      |\n";
    cout << "|--------------------------------------------------|\n";
    cout << "|Denomination|  Type |  Quantity  |Weight one of(g)|\n";
    cout << "|------------|-------|------------|----------------|\n";
    current = head;
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


void PrintListReverse() { // print list table information reversed

    Node* current;
    cout << "---------------------------------------------------\n";
    cout << "|                 Parts sheet                      |\n";
    cout << "|--------------------------------------------------|\n";
    cout << "|Denomination|  Type |  Quantity  |Weight one of(g)|\n";
    cout << "|------------|-------|------------|----------------|\n";
    current = tail;
    while (current) {
        printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->count, current->weight);
        current = current->prev;
    }
    cout << "----------------------------------------------------\n";
    cout << "|Note: the following type encoding is accepted:    | \n";
    cout << "|   O - original, P - purchased, B - borrowed      | \n";
    cout << "---------------------------------------------------\n";
    cout << "\n\n\n\n";

}



void SearchByDenomination(Node* p) { // searching by name

    Node* current = p;
    char* nameSearch =  new char [15];
    short count = 0;
    cout << "Enter the denomination detail: ";
    cin >> nameSearch;
    cout << "---------------------------------------------------\n";
    cout << "|                 Parts sheet                      |\n";
    cout << "|--------------------------------------------------|\n";
    cout << "|Denomination|  Type |  Quantity  |Weight one of(g)|\n";
    cout << "|------------|-------|------------|----------------|\n";
    if (current == head)
        while (current) {
            if (strcmp(current->name, nameSearch) == 0) {
                printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->count, current->weight);
                count++;
            }
            current = current->next;
        }
    else
        while (current) {
            if (strcmp(current->name, nameSearch) == 0) {
                printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->count, current->weight);
                count++;
            }
            current = current->prev;
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




void SearchByType(Node* p) { // searhing by type

    Node* current = p;
    char typeSearch;
    short count = 0;
    cout << "Enter a type of detail: ";
    cin >> typeSearch;
    cout << "---------------------------------------------------\n";
    cout << "|                 Parts sheet                      |\n";
    cout << "|--------------------------------------------------|\n";
    cout << "|Denomination|  Type |  Quantity  |Weight one of(g)|\n";
    cout << "|------------|-------|------------|----------------|\n";
    if (current == head)
        while (current) {
            if (current->type == typeSearch) {
                printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->count, current->weight);
                count++;
            }
            current = current->next;
        }
    else
        while (current) {
            if (current->type == typeSearch) {
                printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->count, current->weight);
                count++;
            }
            current = current->prev;
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




void SearchByQuantity(Node* p) { // searhing by count

    Node* current = p;
    int quantitySearch;
    short count = 0;
    cout << "Enter quantity of details: ";
    cin >> quantitySearch;
    cout << "---------------------------------------------------\n";
    cout << "|                 Parts sheet                      |\n";
    cout << "|--------------------------------------------------|\n";
    cout << "|Denomination|  Type |  Quantity  |Weight one of(g)|\n";
    cout << "|------------|-------|------------|----------------|\n";
    if (current == head)
        while (current) {
            if (current->count == quantitySearch) {
                printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->count, current->weight);
                count++;
            }
            current = current->next;
        }
    else
        while (current) {
            if (current->count == quantitySearch) {
                printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->count, current->weight);
                count++;
            }
            current = current->prev;
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





void SearchByWeight(Node* p) { // searhing by weigth

    Node* current = p;
    float weightSearch;
    short count = 0;
    cout << "Enter details` weight: ";
    cin >> weightSearch;
    cout << "---------------------------------------------------\n";
    cout << "|                 Parts sheet                      |\n";
    cout << "|--------------------------------------------------|\n";
    cout << "|Denomination|  Type |  Quantity  |Weight one of(g)|\n";
    cout << "|------------|-------|------------|----------------|\n";
    if (current == head)
        while (current) {
            if ((current->weight * 10) / 10 == weightSearch) {
                printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->count, current->weight);
                count++;
            }
            current = current->next;
        }
    else
        while (current) {
            if ((current->weight * 10) / 10 == weightSearch) {
                printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->count, current->weight);
                count++;
            }
            current = current->prev;
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


void AddTermBegin() { // adding new item in the beginning of the list
    Node* current = new Node;
    cout << ") Enter: name, type, quantity, weight \n --> ";
    cin >> current->name >> current->type >> current->count >> current->weight;
    current->prev = NULL;
    current->next = head;
    head->prev = current;
    head = current;
}
void DeleteTermBegin() { // delete from the beginnng of list
    Node* current = head;
    head = current->next;
    if (head == NULL) {
        delete current;
        return;
    }
    head->prev = NULL;
    delete current;
}




void AddTermEnd() { // adding new item in the end of the list
    Node* current = head, * prev = NULL;
    while (current)
    {
        prev = current;
        current = current->next;
    }
    current = new Node;
    cout << ") Enter: name, type, quantity, weight \n --> ";
    cin >> current->name >> current->type >> current->count >> current->weight;
    prev->next = current;
    current->prev = prev;
    current->next = NULL;
    tail = current;
}
void DeleteTermEnd() { // delete from the end of list
    Node* current = head, * prev = NULL;
    while (current->next) {
        prev = current;
        current = current->next;
    }
    if (prev == NULL) {
        DeleteTermBegin();
        return;
    }
    prev->next = NULL;
    tail = prev;
    delete current;
}

void AddTermTag() {   // inserting item

    Node* current = head, * prev = current;

    char* NumberTag = new char[15];
    cout << "Enter the previous denomination detail that will be before your`s ->  "; // item that will be the previous
    cin >> NumberTag;

    while (current) {
        if (strcmp(prev->name, NumberTag) == 0) { // searich previous
            current = new Node;
            current->next = prev->next;
            prev->next->prev = current;
            current->prev = prev;
            prev->next = current; // inserting
            cout << ") Enter: name, type, quantity, weight \n --> ";
            cin >> current->name >> current->type >> current->count >> current->weight; // insert item
            cout << "Information has been successfully added." << endl;
            return;
        }
        prev = current;
        current = current->next;
    }
    if (strcmp(prev->name, NumberTag) == 0) { // searich previous
        current = new Node;
        cout << ") Enter: name, type, quantity, weight \n --> ";
        cin >> current->name >> current->type >> current->count >> current->weight; // insert item
        prev->next = current;
        current->prev = prev; // inserting
        current->next = NULL;
        tail = current;
        return;
    }
    system("cls");
    cout << "\n ERROR! \n";
    delete[] NumberTag;


}


void RemoveTermTag() { // remove inserted item
    Node* current = head, * prev = NULL;

    char* NumberTag = new char[15];
    cout << "Enter the denomination detail ->  ";
    cin >> NumberTag;

    if (strcmp(current->name, NumberTag) == 0) {
        DeleteTermBegin();
        system("cls");
        cout << "Information has been successfully deleted." << endl;
        return;
    }
    while (current) {
        if (strcmp(current->name, NumberTag) == 0) {
            if (current->next == NULL) {
                prev->next = NULL;
                tail = prev;
                delete current;
                system("cls");
                cout << "Information has been successfully deleted." << endl;
                return;
            }
            current->next->prev = current->prev;
            current->prev->next = current->next;
            delete current;
            system("cls");
            cout << "Information has been successfully deleted." << endl;
            return;
        }
        else {
            prev = current;
            current = current->next;
        }
    }
    system("cls");
    cout << "\n ERROR\n " << endl;
    delete[] NumberTag;
}
void SortTerm(int set) { // sorting information
    Node* left = head;
    Node* right = head->next;
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


void SaveInFile() { // writing in data.txt
    Node* current = head;
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


void LoadFromFile() { // reading from data.txt
    Node* current, * prev;
    prev = current = head = new Node;
    head->prev = NULL;
    FILE* data;
    data = fopen("data.txt", "r");
    if (!data) {
        cout << "ERROR. Missing data.txt";
        delete current;
        head = NULL;
        return;
    }
    if (fgetc(data) == EOF) {
        cout << "File is empty.";
        delete current;
        head = nullptr;
        return;
    }
    fscanf(data, "%s%s%d%f", &current->name, &current->type, &current->count, &current->weight);
    while (!feof(data)) {
        current = new Node;
        fscanf(data, "%s%s%d%f", &current->name, &current->type, &current->count, &current->weight);
        prev->next = current;
        current->prev = prev;
        prev = current;
    }
    current->next = NULL;
    tail = current;
    cout << "File has been successfully saved." << endl;
    fclose(data);
}






void FreeList() { // clean list
    Node* current = head;
    while (current)
    {
        head = head->next;
        delete current;
        current = head;
    }
}
bool checkNULL() { // cheking on empty
    if (head == NULL) {
        cout << "List is empty.";
        return 0;
    }
    return 1;
}
