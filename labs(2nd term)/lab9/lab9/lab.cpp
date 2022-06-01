#include "lab.hpp"

extern Node* head, * tail;

void CreateListConsole() { // user`s input
    Node* current, * previous;
    head = previous = current = new Node;

    short n = 0;
    cout << 1 << "Введите: обозначение, тип, номинал, количество \n --> ";
    current->prev = nullptr;
    cin >> current->name >> current->type >> current->count >> current->weight;
    for (size_t i = 0; i < 2; ++i) {

        current = new Node;
        cout << i + 2 << "Введите: обозначение, тип, номинал, количество \n --> ";
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
    cout << "Сколько случайных элементов хотите создать? ->  ";
    cin >> choose;



    //current->name = name_rand[rand() % 3];
    current->type = letters[rand() % 3];
    current->count = rand() + 1;
    current->weight = rand() + 10.0;
    current->prev = NULL;

    for (size_t i = 0; i < choose - 1; ++i) {
        current = new Node;
        //current->name = name_rand[rand() % 3];
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
    printf("---------------------------------------------------\n");
    printf("|Ведомомсть комплектующих                          |\n");
    printf("|--------------------------------------------------|\n");
    printf("| Обозначение|  Тип  |  Номинал    |    Количество |\n");
    printf("|------------|-------|-------------|---------------|\n");
    current = head;
    while (current) {
        printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->count, current->weight);
        current = current->next;
    }
    printf("|--------------------------------------------------|\n");
    printf("| Примечание: R - резистор, C - конденсатор        |\n");
    printf("----------------------------------------------------\n");
    cout << "\n\n\n\n";

}


void PrintListReverse() { // print list table information reversed

    Node* current;
    printf("---------------------------------------------------\n");
    printf("|Ведомомсть комплектующих                          |\n");
    printf("|--------------------------------------------------|\n");
    printf("| Обозначение|  Тип  |  Номинал    |    Количество |\n");
    printf("|------------|-------|-------------|---------------|\n");
    current = tail;
    while (current) {
        printf("|%12s|   %c   |  %-9.1d | %14lg |\n", current->name, current->type, current->count, current->weight);
        current = current->prev;
    }
    printf("|--------------------------------------------------|\n");
    printf("| Примечание: R - резистор, C - конденсатор        |\n");
    printf("----------------------------------------------------\n");
    cout << "\n\n\n\n";

}



void SearchByDenomination(Node* p) { // searching by name

    Node* current = p;
    char* nameSearch =  new char [15];
    short count = 0;
    cout << "Введите обозначение: ";
    cin >> nameSearch;
    printf("---------------------------------------------------\n");
    printf("|Ведомомсть комплектующих                          |\n");
    printf("|--------------------------------------------------|\n");
    printf("| Обозначение|  Тип  |  Номинал    |    Количество |\n");
    printf("|------------|-------|-------------|---------------|\n");
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
    printf("|--------------------------------------------------|\n");
    printf("| Примечание: R - резистор, C - конденсатор        |\n");
    printf("----------------------------------------------------\n");
    cout << "\n\n\n\n";
    if (count > 0)
        cout << "Всего найдено: " << count << endl;
    else {
        system("cls");
        cout << endl << "Не найдено" << endl;
    }
    delete[]nameSearch;

}




void SearchByType(Node* p) { // searhing by type

    Node* current = p;
    char typeSearch;
    short count = 0;
    cout << "Введите тип: ";
    cin >> typeSearch;
    printf("---------------------------------------------------\n");
    printf("|Ведомомсть комплектующих                          |\n");
    printf("|--------------------------------------------------|\n");
    printf("| Обозначение|  Тип  |  Номинал    |    Количество |\n");
    printf("|------------|-------|-------------|---------------|\n");
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
    printf("|--------------------------------------------------|\n");
    printf("| Примечание: R - резистор, C - конденсатор        |\n");
    printf("----------------------------------------------------\n");
    cout << "\n\n\n\n";
    if (count > 0)
        cout << "Всего найдено: " << count << endl;
    else {
        system("cls");
        cout << endl << "Не найдено" << endl;
    }

}




void SearchByQuantity(Node* p) { // searhing by count

    Node* current = p;
    int quantitySearch;
    short count = 0;
    cout << "Введите номинал: ";
    cin >> quantitySearch;
    printf("---------------------------------------------------\n");
    printf("|Ведомомсть комплектующих                          |\n");
    printf("|--------------------------------------------------|\n");
    printf("| Обозначение|  Тип  |  Номинал    |    Количество |\n");
    printf("|------------|-------|-------------|---------------|\n");
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
    printf("|--------------------------------------------------|\n");
    printf("| Примечание: R - резистор, C - конденсатор        |\n");
    printf("----------------------------------------------------\n");
    cout << "\n\n\n\n";
    if (count > 0)
        cout << "Всего найдено: " << count << endl;
    else {
        system("cls");
        cout << endl << "Не найдено" << endl;
    }

}





void SearchByWeight(Node* p) { // searhing by weigth

    Node* current = p;
    float weightSearch;
    short count = 0;
    cout << "Введите количество: ";
    cin >> weightSearch;
    printf("---------------------------------------------------\n");
    printf("|Ведомомсть комплектующих                          |\n");
    printf("|--------------------------------------------------|\n");
    printf("| Обозначение|  Тип  |  Номинал    |    Количество |\n");
    printf("|------------|-------|-------------|---------------|\n");
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
    printf("|--------------------------------------------------|\n");
    printf("| Примечание: R - резистор, C - конденсатор        |\n");
    printf("----------------------------------------------------\n");
    cout << "\n\n\n\n";
    if (count > 0)
        cout << "Всего найдено: " << count << endl;
    else {
        system("cls");
        cout << endl << "Не найдено" << endl;
    }
}


void AddTermBegin() { // adding new item in the beginning of the list
    Node* current = new Node;
    cout << "Введите: обозначение, тип, номинал, количество \n --> ";
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
    cout << "Введите: обозначение, тип, номинал, количество \n --> ";
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
        fprintf(data, "\n%s\t%c\t%d\t%lg", current->name, current->type, current->count, current->weight);
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
        cout << "Список пуст.";
        return 0;
    }
    return 1;
}
