#include "lab.hpp"

string dataNames[32] = { "Adrii", "Denis", "Serhii", "Volodymyr", "Ivan", "Mykhailo", "Oleh", "Artem", "Vladislav", "Oleksandr", "Hleb", "Anatoliy", "Daniel", "Eduard", "Semen", "Olexiy",
                           "Sophia", "Oleksandra", "Miroslava", "Alisa", "Anastasiya", "Emma", "Natalia", "Tetiana", "Elizaveta", "Anna", "Olha", "Zoey", "Valeria", "Vladislava", "Katerina", "Kristina" };
string dataSecondNames[50] = { "Shevchenko", "Haumenko", "Haumko", "Ostapchuk", "Melnik","Melnichuk","Motruk", "Lysnak","Parkhomenko","Sydorchuk", "Sydorenko","Bandera","Pobedrya", "Tkachuk","Fedorko","Sarkisyan", "Podolyak","Tymochuk","Melnichenko", "Ivanichenko","Dashkevich","Syniy", "Lubchenko","Petlura","Kyiko", "Moseychuk","Grichanenko","Pylypenko", "Tkachenko","Saenko","Seleznyuk", "Sayko","Horbach","Kutsak", "Green","Adams","Baker",
    "Gonzalez", "Nelson","Carter","Mitchell", "Perez","Roberts","Turner", "Phillips","Campbell","Parker", "Evans","Edwards","Collins" };
string dataSubjects[7] = { "shizophrenia", "sklerosis", "cystitis", "stroke", "appendecitis", "parkinson", "gangrene"};
string dataadress[17] = {"Khreshatyk-21", "Sverstuka-8", "Antonovicha-39", "Banderi-23", "Petluri-77", "Perova-10", "Vaylkivska-33", "Asenalna-81", "Kibalchicha-99", "Zakrevskoho-12", "Nikitina-27", "Kurnatovskoho-7", "Enthusiastiv-3", "Shamo-87", "Reheneratorna-5", "Berezneba-2", "Shevchenko-90"};

// main class


void Main::main()
{
    short int count, button, checker;
    string check;
    Patient* head = NULL, * tail = NULL;

    while (true) {
        cout << "Створити список - 1 \nНазад - 0 \n-->"; cin >> button;
        if (cin.fail()) {
            system("cls");
            cin.clear();
            cin.ignore(32767, '\n');
            cout << " \t\t\tIncorrect input! ERROR! " << endl;
            continue;
        }
        switch (button)
        {
        case 1:
            while (button != 0) {
                system("cls");
                if (head == NULL) {
                    cout << "На скільки елементів ви бажаєте створити список? \n---> "; cin >> count;
                    if (cin.fail()) {
                        system("cls");
                        cin.clear();
                        cin.ignore(32767, '\n');
                        cout << " \t\t\tIncorrect input! ERROR! " << endl;
                        continue;
                    }
                    CreateList(count, &head, tail);
                    system("cls");
                }

                table_header();
                PrintList(head);

                cout << "Шукати паціентів за номером картки - 1\n" <<
                    "Шукати паціентів за діагнозом - 2\n" <<
                    "Видалити один елемент- 3\n" <<
                    "Додати елемент - 4\n" <<
                    "Back - 0\n" <<
                    "-->";
                cin >> button;
                if (cin.fail()) {
                    system("cls");
                    cin.clear();
                    cin.ignore(32767, '\n');
                    cout << " \t\t\tIncorrect input! ERROR! " << endl;
                    continue;
                    system("pause");
                }

                switch (button)
                {
                case 1:
                    system("cls");
                    short int check1;
                    short int check2;
                    cout << "Введіть перший номер картки для інтервалу: " << endl;
                    cin >> check1;
                    cout << "Введіть другий номер картки для інтервал: " << endl;
                    cin >> check2;
                    byNum(&head, check1, check2);
                    system("pause");
                    break;
                case 2:
                    system("cls");
                        cout << "Введіть бажаний діагноз:" << endl;
                        cin >> check;
                    byDiagnosis(&head, check);
                    system("pause");
                    break;
               
                case 3:
                    system("cls");
                    cout << "Введіть номер едементу \n-->"; cin >> checker;
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
                case 4:
                    system("cls");
                    cout << "Введіть номер елементу \n-->"; cin >> checker;
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


void Patient::setterAll(string FullName, string address, short int num, string diagnosis)
{
    this->FullName = FullName;
    this->address = address;
    this->num.setterNum(num);
    this->num.setterDiagnosis(diagnosis);

}



string Patient::getterFullname()  { return this->FullName; }

string Patient::getterAddress()  { return this->address; }

short int Patient::getterNum() { return num.getterNum(); }

string Patient::getterDiagnosis(){ return num.getterDiagnosis();}



void Patient::show()
{
    if (this->num.getterNum() != -1)
    cout << "|" << setw(22) << this->FullName << setw(4) << "|" << setw(32) << this->address << setw(4) << "|" << setw(4) << this->num.getterNum() << setw(10) << "|" << setw(12) << this->num.getterDiagnosis() << setw(4) << "|" << setw(18) << this->departament.getterDepName() << setw(4) << "|" << setw(2) << boolalpha << this->departament.getterfullDay() << setw(7) << "|";
    else
        cout << "|" << setw(22) << "USER INVALID" << setw(4) << "|" << setw(32) << "ERROR" << setw(4) << "|" << setw(4) << "404" << setw(11) << "|" << setw(12) << "404" << setw(4) << "|" << setw(18) << "404" << setw(4) << "|" << setw(6) << boolalpha << "ERROR" << setw(6) << "|";
    cout << "\n ------------------------------------------------------------------------------------------------------------------------------\n";
}



void Main::byNum(Patient** head, short int check1, short int check2)
{
    int count = 0;
    Patient* current = *head;
    Patient* unsatisfactoryGrade = new Patient[MAXSIZE];


    if (DcheckNULL((*head)) == 0) { return; }
    else {
        while (current) {
            if (check1 < current->getterNum() && check2 > current->getterNum()) {
                unsatisfactoryGrade[count].setterAll(current->getterFullname(), current->getterAddress(), current->getterNum(), current->getterDiagnosis());
                count++;
            }
            current = current->next;
        }
    }

    if (count != 0) {
        table_header();
        for (size_t i = 0; i < count; i++) {
            unsatisfactoryGrade[i].show();
        }
    }
    else
        cout << "\tТаких паціентів не знайдено!!\n";


    delete[] unsatisfactoryGrade; unsatisfactoryGrade = NULL;
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
                byDiagnosis[count].setterAll(current->getterFullname(), current->getterAddress(), current->getterNum(), current->getterDiagnosis());
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









void Main::table_header()
{
    cout << "\n ------------------------------------------------------------------------------------------------------------------------------\n";
    cout << "|" << setw(17) << "Full Name" << setw(9) << "|" << setw(23) << "Adress" << setw(13) << "|" << setw(6) << "Number" << setw(9) << "|" << setw(12) << "Diagnosis" << setw(4) << "|" << setw(18) << "Department" << setw(4) << "|" << setw(6) << "FTP" << setw(6) << "|";
    cout << "\n ------------------------------------------------------------------------------------------------------------------------------\n";
}





void Main::CreateList(short int count, Patient** head, Patient* tail)
{
    string FullName, buffer, address, subject; short int grade;
    
    if (count > 0) {
        (*head) = new Patient;
        FullName = dataNames[rand() % 32];
        address += FullName;
        FullName += " ";
        buffer = dataSecondNames[rand() % 32];
        FullName += buffer;
        address = dataadress[rand() % 17];
        if (rand() % 2)
            grade = rand() % 1000 + 1000000;
        else
            grade = -1;
        subject = dataSubjects[rand() % 7];
        (*head)->setterAll(FullName, address, grade, subject);
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
    string FullName, buffer, address, subject; short int grade;
    FullName = dataNames[rand() % 32];
    address += FullName;
    FullName += " ";
    buffer = dataSecondNames[rand() % 32];
    FullName += buffer;
    address = dataadress[rand() % 17];
    if (rand() % 2)
        grade = rand() % 1000 + 1000000;
    else
        grade = -1;
    subject = dataSubjects[rand() % 11];
    temp->setterAll(FullName, address, grade, subject);

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


bool Main::DcheckNULL(Patient* head) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return 0;
    }
    return 1;
}


void Main::FreeList(Patient** head) { 
    Patient* current = *head;
    while (current) {
        *head = (*head)->next;
        free(current);
        current = *head;
    }
}


