#include "lab.hpp"

extern Node* head, * tail;

void CreateListConsole() { // user`s input
    Node* current, * previous;
    head = previous = current = new Node;

    short n = 0;
    cout << 1 << "Введите данные\n --> ";
    current->prev = nullptr;
    cin >> current->num >> current->type >> current->count >> current->weight;
    for (size_t i = 0; i < 2; ++i) {

        current = new Node;
        cout << i + 2 << "Введите данные\n --> ";
        cin >> current->num >> current->type >> current->count >> current->weight;
        previous->next = current;
        current->prev = previous;
        previous = current;

    }
    tail = current;
    previous->next = NULL;
}








void PrintList() { // print list table information

    Node* current;
    printf("|------------|-------|-------------|---------------|\n");
    current = head;
    while (current) {
        printf("|%12d|   %d   |  %-9.1d | %14d |\n", current->num, current->type, current->count, current->weight);
        current = current->next;
    }
    printf("|--------------------------------------------------|\n");
    printf("----------------------------------------------------\n");
    cout << "\n\n\n\n";

}


void PrintListReverse() { // print list table information reversed

    Node* current;
    printf("|------------|-------|-------------|---------------|\n");
    current = tail;
    while (current) {
        printf("|%12d|   %d   |  %-9.1d | %14d |\n", current->name, current->type, current->count, current->weight);
        current = current->prev;
    }
    printf("|--------------------------------------------------|\n");
    printf("----------------------------------------------------\n");
    cout << "\n\n\n\n";

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
    fscanf(data, "%d%d%d%d", &current->num, &current->type, &current->count, &current->weight);
    while (!feof(data)) {
        current = new Node;
        fscanf(data, "%d%d%d%d", &current->num, &current->type, &current->count, &current->weight);
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
