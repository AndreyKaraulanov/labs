#include "lab.hpp"
patient::patient(){
    surname = "Шевченко";
    name = "Тарас";
    secname = "Григорович";
    adress = "Шевченко-93";
    num = 0;
    diagnosis = "Перелом";
}


void patient::setsurname(string valuesurname){
    surname = valuesurname;
}
string patient::getsurname(){
    return surname;
}
void patient::setname(string valuename){
    name = valuename;
}
string patient::getname(){
    return name;
}
void patient::setsecname(string valuesecname){
    secname = valuesecname;
}
string patient::getsecname(){
    return secname;
}
void patient::setadress(string valueadress){
    adress = valueadress;
}
string patient::getadress(){
    return adress;
}
void patient::setnum(int valuenum){
    num = valuenum;
}
int patient::getnum(){
    return num;
}
void patient::setdiagnosis(string valuediagnosis){
    diagnosis = valuediagnosis;
}
string patient::getdiagnosis(){
    return diagnosis;
}
void patient::main(patient patient[]){
    
    short int count;
    cout << "На скільки елементів ви бажаєте створити список?" << endl;
    cin >> count;
    while (true) {
        int button;
        
        cout << "Створити список паціентів - 1\nПечать - 2\nПошук за діагнозом - 3\nПошук за ноиером картки - 4 \nДобавити елемент - 5\nВидалити елемент - 6\nвихід - 0 \n\n-->"; cin >> button;
        if (button == 1) {
           
            patient-> data(patient, count);
            
        }
        else if (button == 2) {
            patient-> print();
            patient-> show(patient, count);
        }
        else if(button == 3){
            patient-> search_by_diagnisis(patient, count);
        }
        else if (button == 4){
            patient-> search_by_num(patient, count);
        }
        else if (button == 5){
            patient->append(patient, count);
        }
        else if (button == 6){
            patient->remove(patient, count);
        }
        else if (button == 0){
            exit(0);
        }
    }
    
   
}

void patient:: data(patient patient[], short int count){
    static string surname_rand[] = {"Шевченко", "Дашкевич", "Остапчук", "Сидорчук", "Науменко"};
    static string name_rand[] = {"Сидор", "Семен", "Тарас", "Вуйко", "Петро", "Денис"};
    static string secname_rand[] = {"Андрійович", "Михайлович", "Сергійович", "Вікторович", "Васильвоич"};
    static string adress_rand[] = {"Шевченко-93", "Хрещатик-26", "Нікітіна-27", "Либідска-33", "Сверстюка-8"};
    static string diagnosis_rand[] = {"Перелом", "Інфаркт", "Опухоль", "Склероз", "Інсульт"};
    for (int i = 0; i < count; i++) {
        patient[i].surname = surname_rand[rand() % 5];
        patient[i].name = name_rand[rand() % 5];
        patient[i].secname = secname_rand[rand() % 5];
        patient[i].adress = adress_rand[rand() % 5];
        patient[i].num = rand() % 1000 + 1000000;;
        patient[i].diagnosis = diagnosis_rand[rand() % 5];
    }
    cout << "Спісок паціентів створений" << endl;
}

void patient::print(){
    cout << setw(4) << "-------------------------------------------------------------------------------------\n";
    cout << setw(4) << "|                                 Список пацієнтів                                  |\n";
    cout << setw(4) << "-------------------------------------------------------------------------------------\n";
}
void patient::show(patient patient[], short int count){
    for (int i = 0; i < count; i++) {
            cout << "|"<<setw(10) << patient[i].surname << setw(4);
            cout << "|" << setw(4) << patient[i].name << setw(2);
            cout << "|" << setw(6) << patient[i].secname << setw(6);
            cout << "|" << setw(3) << patient[i].adress <<setw(6);
            cout << "|" << setw(3) << patient[i].num <<setw(6);
        cout << "|" << setw(3) << patient[i].diagnosis <<setw(13);
            cout<<"|\n";
            cout<< "-------------------------------------------------------------------------------------\n";
        }
}
void patient::search_by_diagnisis(patient patient[], short int count){
    string search;
   
    cout << "Введіть діагноз: " << endl;
    cin >> search;
    cout << setw(4) << "-------------------------------------------------------------------------------------\n";
    cout << setw(4) << "|                                 Список пацієнтів                                  |\n";
    cout << setw(4) << "-------------------------------------------------------------------------------------\n";
    for (int i = 0; i < count; i++) {
        if (search == patient[i].diagnosis) {
            cout << "|"<<setw(10) << patient[i].surname << setw(4);
            cout << "|" << setw(4) << patient[i].name << setw(2);
            cout << "|" << setw(6) << patient[i].secname << setw(6);
            cout << "|" << setw(3) << patient[i].adress <<setw(6);
            cout << "|" << setw(3) << patient[i].num <<setw(6);
        cout << "|" << setw(3) << patient[i].diagnosis <<setw(13);
            cout<<"|\n";
            cout<< "-------------------------------------------------------------------------------------\n";
        }
        
    }
}
void patient::search_by_num(patient patient[], short int count){
    int num1;
    int num2;
    
    
    cout << "Введіть перший номер картки для інтервалу: " << endl;
    cin >> num1;
    cout << "Введіть другий номер картки для інтервал: " << endl;
    cin >> num2;
    cout << setw(4) << "-------------------------------------------------------------------------------------\n";
    cout << setw(4) << "|                                 Список пацієнтів                                  |\n";
    cout << setw(4) << "-------------------------------------------------------------------------------------\n";
    for (int i = 0; i < count; i++) {
      
        if (num1 < patient[i].num && num2 > patient[i].num) {
            cout << "|"<<setw(10) << patient[i].surname << setw(4);
            cout << "|" << setw(4) << patient[i].name << setw(2);
            cout << "|" << setw(6) << patient[i].secname << setw(6);
            cout << "|" << setw(3) << patient[i].adress <<setw(6);
            cout << "|" << setw(3) << patient[i].num <<setw(6);
        cout << "|" << setw(3) << patient[i].diagnosis <<setw(13);
            cout<<"|\n";
            cout<< "-------------------------------------------------------------------------------------\n";
        }
            
            
        
        
    }
    
}





void patient::append(patient patient[], short int count){
    int k;
    cout << "Скільки елементів ви бажаєте додати?" << endl;
    cin >> k;
    cout << setw(4) << "-------------------------------------------------------------------------------------\n";
    cout << setw(4) << "|                                 Список пацієнтів                                  |\n";
    cout << setw(4) << "-------------------------------------------------------------------------------------\n";
    for (int i = 0; i < count; i++) {
            cout << "|"<<setw(10) << patient[i].surname << setw(4);
            cout << "|" << setw(4) << patient[i].name << setw(2);
            cout << "|" << setw(6) << patient[i].secname << setw(6);
            cout << "|" << setw(3) << patient[i].adress <<setw(6);
            cout << "|" << setw(3) << patient[i].num <<setw(6);
        cout << "|" << setw(3) << patient[i].diagnosis <<setw(13);
            cout<<"|\n";
        cout<< "-------------------------------------------------------------------------------------\n";
    }
    for (int i = 0; i < k; i++) {
        cout << "|"<<setw(10) << surname << setw(4);
        cout << "|" << setw(4) << name << setw(2);
        cout << "|" << setw(6) << secname << setw(6);
        cout << "|" << setw(3) << adress <<setw(6);
        cout << "|" << setw(3) << num <<setw(6);
    cout << "|" << setw(3) << diagnosis <<setw(13);
        cout<<"|\n";
        cout<< "-------------------------------------------------------------------------------------\n";
    }
}

void patient::remove(patient patient[], short int count){
    cout << setw(4) << "------------------------------------------------------------------------------------\n";
    cout << setw(4) << "|                                 Список пацієнтів                                  |\n";
    cout << setw(4) << "------------------------------------------------------------------------------------\n";
    
    for (int i = 0; i < count; i++) {
        cout << "|"<<setw(10) << patient[i].surname << setw(4);
        cout << "|" << setw(4) << patient[i].name << setw(1);
        cout << "|" << setw(6) << patient[i].secname << setw(6);
        cout << "|" << setw(3) << patient[i].adress <<setw(6);
        cout << "|" << setw(3) << patient[i].num <<setw(6);
        cout << "|" << setw(3) << patient[i].diagnosis <<setw(13);
        cout<<"|\n";
        cout<< "------------------------------------------------------------------------------------\n";
    }
    
}
