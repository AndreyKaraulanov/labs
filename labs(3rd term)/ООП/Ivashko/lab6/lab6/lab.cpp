#include "lab.hpp"

string dataNames[32] = { "Adrii", "Denis", "Serhii", "Volodymyr", "Ivan", "Mykhailo", "Oleh", "Artem", "Vladislav", "Oleksandr", "Hleb", "Anatoliy", "Daniel", "Eduard", "Semen", "Olexiy",
                           "Sophia", "Oleksandra", "Miroslava", "Alisa", "Anastasiya", "Emma", "Natalia", "Tetiana", "Elizaveta", "Anna", "Olha", "Zoey", "Valeria", "Vladislava", "Katerina", "Kristina" };
string dataSecondNames[50] = { "Shevchenko", "Haumenko", "Haumko", "Ostapchuk", "Melnik","Melnichuk","Motruk", "Lysnak","Parkhomenko","Sydorchuk", "Sydorenko","Bandera","Pobedrya", "Tkachuk","Fedorko","Sarkisyan", "Podolyak","Tymochuk","Melnichenko", "Ivanichenko","Dashkevich","Syniy", "Lubchenko","Petlura","Kyiko", "Moseychuk","Grichanenko","Pylypenko", "Tkachenko","Saenko","Seleznyuk", "Sayko","Horbach","Kutsak", "Green","Adams","Baker",
    "Gonzalez", "Nelson","Carter","Mitchell", "Perez","Roberts","Turner", "Phillips","Campbell","Parker", "Evans","Edwards","Collins" };
string datadiagnosis[7] = {"shizophrenia", "sklerosis", "cystitis", "stroke", "appendecitis", "parkinson", "gangrene"};
string dataadress[17] = {"Khreshatyk-21", "Sverstuka-8", "Antonovicha-39", "Banderi-23", "Petluri-77", "Perova-10", "Vaylkivska-33", "Asenalna-81", "Kibalchicha-99", "Zakrevskoho-12", "Nikitina-27", "Kurnatovskoho-7", "Enthusiastiv-3", "Shamo-87", "Reheneratorna-5", "Berezneba-2", "Shevchenko-90"};
// main class


void Main::main()
{
    short int count, button, checker;
    string check;
    Patient* head = NULL, * tail = NULL;

    while (true) {
        cout << "Нвтисніть, щоб створити - 1\nВийти - 0 \n-->"; cin >> button;
        if (cin.fail()) {
            //system("cls");
            cin.clear();
            cin.ignore(32767, '\n');
            cout << " \t\t\tIncorrect input! ERROR! " << endl;
            continue;
        }
        switch (button)
        {
        case 1:
            while (button != 0) {
                //system("cls");
                if (head == NULL) {
                    cout << "На скільки елементів ви хотите створити список? \n---> "; cin >> count;
                    if (cin.fail()) {
                        //system("cls");
                        cin.clear();
                        cin.ignore(32767, '\n');
                        cout << " \t\t\tIncorrect input! ERROR! " << endl;
                        continue;
                    }
                    CreateList(count, &head, tail);
                    //system("cls");
                }

                table_header();
                PrintList(head);

                cout <<
                    "Пошук раціента по діагнозу - 1\n" <<
                    "Видалити одну строку - 2\n" <<
                    "Додоати нову строку - 3\n" <<
                    "Назад - 0\n" <<
                    "-->";
                cin >> button;
                if (cin.fail()) {
                    //system("cls");
                    cin.clear();
                    cin.ignore(32767, '\n');
                    cout << " \t\t\tIncorrect input! ERROR! " << endl;
                    continue;
                    //system("pause");
                }

                switch (button)
                {
                case 1:
                    //system("cls");
                    cout << "Введіть діагноз, який вам потрібен: " << endl;
                    cin >> check;
                    
                    byDiagnosis(&head, check);
                    //system("pause");
                    break;
                case 2:
                    system("cls");
                    cout << "Введіть номер строки \n-->"; cin >> checker;
                    if (cin.fail()) {
                        system("cls");
                        cin.clear();
                        cin.ignore(32767, '\n');
                        cout << " \t\t\tIncorrect input! ERROR! " << endl;
                        system("pause");
                        continue;
                    }
                    DeleteInList(&head, &tail, checker);
                    break;
                case 3:
                    system("cls");
                    cout << "Введіть номер строки \n-->"; cin >> checker;
                    if (cin.fail()) {
                        system("cls");
                        cin.clear();
                        cin.ignore(32767, '\n');
                        cout << " \t\t\tIncorrect input! ERROR! " << endl;
                        system("pause");
                        continue;
                    }
                    Insert(&head, &tail, checker);
                    break;
                case 0:
                    system("cls");
                    break;
                default:
                    break;
                }

            }
            break;
        case 2:
            system("cls");
            if (DcheckNULL(head) != 0)
                FreeList(&head);
            break;
        case 0:
            system("cls");
            FreeList(&head);
            exit(0);
            break;
        default:
            break;
        }

    }

}



void Patient::setterAll(string FullName,  string address, string diagnosis)
{
    this->FullName = FullName;
    this->address = address;
    this->diagnosis.setter(diagnosis);

}



string Patient::getterFullname()  { return this->FullName; }

string Patient::getterAddress()  { return this->address; }

string Patient::getterDiagnosis()  { return diagnosis.getterDiagnosis(); }


void Patient::show()
{
    cout << "|" << setw(22) << this->FullName << setw(4) << "|" << setw(32) << this->address << setw(4) << "|" << setw(18) << this->diagnosis.getterDiagnosis() << setw(4) << "|";
    cout << "\n ------------------------------------------------------------------------------------\n";
}











void Main::table_header()
{
    cout << "\n ------------------------------------------------------------------------------------\n";
    cout << "|" << setw(17) << "Full Name" << setw(9) << "|" << setw(23) << "Adress" << setw(13) << "|" << setw(18) << "Diagnosis" << setw(4) << "|";
    cout << "\n ------------------------------------------------------------------------------------\n";
}








void Main::CreateList(short int count, Patient** head, Patient* tail)
{
    string FullName, buffer, address; string grade;
    if (count > 0) {
        (*head) = new Patient;
        FullName = dataNames[rand() % 32];
        address += FullName;
        FullName += " ";
        buffer = dataSecondNames[rand() % 32];
        FullName += buffer;
        address = dataadress[rand()%17];
        grade = datadiagnosis[rand() % 7];
        (*head)->setterAll(FullName, address, grade);
        (*head)->prev = tail;
        (*head)->next = NULL;
        CreateList(count - 1, &((*head)->next), (*head));
    }
    else (*head) = NULL;

    size = count;
}

void Main::PrintList(Patient* head) {
    if (head != NULL) {
        head->show();
        PrintList(head->next);
    }
    else cout << endl << endl;
}

void Main::Insert(Patient** head, Patient** tail, int pos) {

    Patient* temp = new Patient;

    if (pos == 0) {
        temp->next = *head;
        (*head)->prev = temp;
        *head = temp;
        temp->prev = NULL;
    }
    else {
        Patient* current = *head;
        for (size_t i = 0; i < pos - 1; i++)
            current = current->next;
        if (current->next == NULL) {
            current->next = temp;
            temp->prev = *tail;
            temp->next = NULL;
            *tail = temp;
        }
        else {
            temp->next = current->next;
            current->next = temp;
            temp->next->prev = temp;
            temp->prev = current;
        }
    }
    string FullName, buffer, address; string grade;
    FullName = dataNames[rand() % 32];
    address += FullName;
    FullName += " ";
    buffer = dataSecondNames[rand() % 32];
    FullName += buffer;
    address = dataadress[rand()%17];
    grade = datadiagnosis[rand() % 7];
    temp->setterAll(FullName, address, grade);

}


void Main::DeleteInList(Patient** head, Patient** tail, int pos) {

    Patient* current = *head;

    if (pos == 0) {
        *head = (*head)->next;
        (*head)->prev = NULL;
        delete current;
    }
    else {
        for (size_t i = 0; i < pos - 1; i++)
            current = current->next;
        Patient* temp = current->next;
        if (temp->next == NULL) {
            current->next = NULL;
            *tail = current;
        }
        else {
            current->next = temp->next;
            temp->next->prev = current;
        }
        delete temp;
    }
}


bool Main::DcheckNULL(Patient* head) { // cheking on empty
    if (head == NULL) {
        cout << "List is empty." << endl;
        return 0;
    }
    return 1;
}


void Main::FreeList(Patient** head) { // clean list
    Patient* current = *head;
    while (current) {
        *head = (*head)->next;
        free(current);
        current = *head;
    }
}

void Main::byDiagnosis(Patient** head, string check)
{
    int count = 0;
    Patient* current = *head;
    Patient* byDiagnosis = new Patient[MAXSIZE];
    
    if (DcheckNULL((*head)) == 0) { return; }
    else {
        while (current) {
            if (current->getterDiagnosis()==check) {
                byDiagnosis[count].setterAll(current->getterFullname(), current->getterAddress(), current->getterDiagnosis());
                count++;
            }
            current = current->next;
        }
    }

    if (count != 0) {
        
        table_header();
        for (size_t i = 0; i < count; i++) {
            byDiagnosis[i].show();
        }
    }
    else
        cout << "\t Таких паціентів не знайдено!\n";


    delete[] byDiagnosis; byDiagnosis = NULL;
}
