#pragma once
#include <iostream>
#include <iomanip>
#include <string>

#define N 10
using namespace std;

class patient {
private:
    string surname;
    string name;
    string secname;
    string adress;
    int num;
    string diagnosis;
public:
    patient();
    
    
    
    void setsurname(string valuesurname);
    string getsurname();
    void setname(string valuename);
    string getname();
    void setsecname(string valuesecname);
    string getsecname();
    void setadress(string valueadress);
    string getadress();
    void setnum(int valuenum);
    int getnum();
    void setdiagnosis(string valuediagnosis);
    string getdiagnosis();
    void data(patient patient[], short int count);
    void print();
    void show(patient patient[], short int count);
    void search_by_diagnisis(patient patient[], short int count);
    void search_by_num(patient patient[], short int count);
    void main(patient patient[]);
    void append(patient patient[], short int count);
    void remove(patient patient[], short int count);
};

