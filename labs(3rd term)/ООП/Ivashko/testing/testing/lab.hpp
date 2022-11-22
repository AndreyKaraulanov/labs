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
    string dataDepNames[4] = { "Therapy", "Surgery", "Admission dep.", "ULTRASOUND" };
public:
    Department() { DepName = dataDepNames[rand() % 4]; fullDay = rand() % 2; }
    string getterDepName() { return DepName; }
    bool getterfullDay() { return fullDay; }
};


class Patient {
    class NumDiagnosis {
        short int num;
        string diagnosis;
    public:
        void setterNum(const short int& num) noexcept { this->num = num; } ;
        void setterDiagnosis(const string& diagnosis) { this->diagnosis = diagnosis; };
        short int getterNum() noexcept { return num; };
        string getterDiagnosis() { return diagnosis; };
    };

    string FullName;
    string address;
    NumDiagnosis num;
    Department departament;

public:

    Patient* next, * prev;
    
    
    void setterAll( string FullName,  string address, short int num, string diagnosis);
    
    
    string getterFullname(); string getterAddress(); short int getterNum(); string getterDiagnosis();

    void show();

    
    friend void Sort(Patient** head, short int set);
    
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
    
    
    void byNum(Patient** head, short int check1, short int check2);
    void byDiagnosis(Patient** head, string check);
    

    
    void main();
    
    ~Main() {};
};
