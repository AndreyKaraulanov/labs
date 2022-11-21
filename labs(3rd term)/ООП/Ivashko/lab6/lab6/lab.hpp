#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

#define  MAXSIZE 300

using namespace std;

class Department
{
    string DepName;
    bool fullDay;
    string dataDepNames[5] = { "Computer Science", "Computer Modeling", "Integrated Tech", "Geom. Modeling", "SGC" };
public:
    Department() { DepName = dataDepNames[rand() % 5]; fullDay = rand() % 2; }
    string getterDepName() { return DepName; }
    bool getterfullDay() { return fullDay; }
};

class Patient {
    class Diagnosis {
        string diagnosis;
    public:
        void setter(const string& diagnosis) noexcept { this->diagnosis = diagnosis; } ;
        string getterDiagnosis() noexcept { return diagnosis; };
    };

    string FullName;
    string address;
    Diagnosis diagnosis;
    Department departament;

public:

    Patient* next, * prev;
    
    void setterAll( string FullName,  string address, string grade);

    string getterFullname(); string getterAddress(); string getterDiagnosis();

    void show();

    ~Patient(){};
    
    
};



class Main
{
private:
    int size;
    
public:
    Main() : size(0) {};
    
    int GetSize() { return size; };
    void CreateList(short int count, Patient** head, Patient* tail);
    void PrintList(Patient* head);
    void Insert(Patient** head, Patient** tail, int pos);
    void DeleteInList(Patient** Dhead, Patient** Dtail, int pos);
    bool DcheckNULL(Patient* head);
    void FreeList(Patient** head);
    void table_header();
    void byDiagnosis(Patient** head, string check);
    
    void main();
    
    ~Main() {};
};
