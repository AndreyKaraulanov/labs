#pragma once
#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#define  MAXSIZE 300

using namespace std;





class Human {
protected:
    string dataNames[32] = { "Ethan", "Josh", "Sam", "Tom", "Bruse", "Michael", "Diego", "Adrian", "Brian", "Carl", "Caleb", "Charles", "Daniel", "Derek", "Elliot", "Kuel",
                           "Sophia", "Amelia", "Ella", "Chloe", "Penelope", "Emma", "Ava", "Isabella", "Elizabath", "Ginna", "Layla", "Zoey", "Olivia", "Sarah", "Rachel", "Emily"};
    string dataSecondNames[50] = { "Smith", "Johnson", "Williams", "Jones", "Brown","Davis","Miller", "Wilson","Moore","Taylor", "Anderson","Thomas","Jackson", "White","Harris","Martin", "Thompson","Garcia","Martinez", "Robinson","Clark","Rodriguez", "Lewis","Lee","Walker", "Hall","Allen","Young", "Hernandez","King","Wright", "Lopez","Hill","Scott", "Green","Adams","Baker",
        "Gonzalez", "Nelson","Carter","Mitchell", "Perez","Roberts","Turner", "Phillips","Campbell","Parker", "Evans","Edwards","Collins"};


    string Name;
    string SecondName;
    string passID;

public:

    virtual string getName() const { return Name; }
    virtual string getpassID() const { return passID; }
    virtual string getSecond() const { return SecondName; }
    virtual void print() = 0;
    virtual void setterAll() = 0;

};

class Patient: public Human
{
protected:
    string address;
    string reason;

};

class Extramural: public Patient
{
    long int studyCost;
public:
    void setterAll() override {

        this->Name = dataNames[rand()%32];
        this->SecondName = dataSecondNames[rand() % 50];
        this->address = Name + SecondName + "@gmail.com";
        this->reason = "To the doctor";
        this->passID = "Hpatiaent";
        this->studyCost = (rand() %90000 + 1000);
    }
    void print() override {
        cout << "|" << setw(10)  << this->Name << setw(10)  << this->SecondName << "|" << setw(33) << this->address;
        cout << "|" << setw(12) << this->passID  << setw(4) << "|" << setw(11) << "Debt: " << setw(6) << this->studyCost << setw(10) << "|" << setw(23) << this->reason << setw(4) << "|" << endl;
    }
    
};
class FullTime : public Patient
{
private:
    string department;
    string Crops[6] = { "Room 1", "Room 2", "Room 3", "Room 4", "Room 5", "Room 6" };
    string Grupe[6] = { "Programmist", "Student", "Traider", "Scentist", "Teacher", "Lawyer" };
public:
    void setterAll() override {

        this->Name = dataNames[rand() % 32];
        this->SecondName = dataSecondNames[rand() % 50];
        this->department = Grupe[rand() % 6];
        if(this->department == Grupe[0] or this->department == Grupe[1] or this->department == Grupe[2])
            this->address = Name + SecondName + "@ukrnet.ua";
        else
            this->address = Name + SecondName + "@gmail.com";
        this->passID = "Patient";
        this->reason = Crops[rand() % 6];
        
    }
    void print() override {
        cout << "|" << setw(10) << this->Name << setw(10) << this->SecondName << "|" << setw(33) << this->address;
        cout << "|"  << setw(12) << this->passID <<setw(4) << "|" << setw(15) << this->department << setw(12) << "|" << setw(20) << this->reason << setw(7) << "|" << endl;
    }
    
};

class Npatient : public Patient {
    int times;
public:
    void setterAll() override {

        this->Name = dataNames[rand() % 32];
        this->SecondName = dataSecondNames[rand() % 50];
        this->address = Name + SecondName + "@gmail.com";
        this->passID = "Newpatient";
        this->times = rand() % 10;
        this->reason = "For the medicines";

    }
    void print() override {
        cout << "|" << setw(10) << this->Name << setw(10) << this->SecondName << "|" << setw(33) << this->address;
        cout << "|" << setw(13) << this->passID <<setw(3) << "|" << setw(12) << "Times: " << times << setw(14) << "|" <<setw(24) << this->reason << setw(3) << "|" << endl;
    }


};

class Staff : public Human
{
protected:
    string number = "+380";
    string work;

};
class Doctor : public Staff {
    bool parkingPlace;
    string workOps[4] = { "Operation", "Attend the patient", "Take the document", "To the new place of job" };
public:
    void setterAll() override {

        this->Name = dataNames[rand() % 32];
        this->SecondName = dataSecondNames[rand() % 50];
        this->number += (to_string(rand()%10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10));
        this->work = workOps[rand()%4];
        this->passID = "Doctor";
        this->parkingPlace = rand() % 2;
    }
    void print() override {
        cout << "|" << setw(10) << this->Name << setw(10) << this->SecondName << "|" << setw(33) << this->number;
        cout << "|" << setw(12) << this->passID << setw(4) << "|" << setw(12) << "Parking: " << boolalpha << setw(9) << this->parkingPlace << setw(10) << "|" << setw(23) << this->work << setw(4) << "|" << endl;
    }
};
class Security : public Staff {
    
    int shift;
public:
    void setterAll() override {

        this->Name = dataNames[rand() % 32];
        this->SecondName = dataSecondNames[rand() % 50];
        this->number += (to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10) + to_string(rand() % 10));
        this->shift = rand() % 6 + 1;
        this->passID = "Security";
        this->work = "CHECKPOINT " + to_string(rand()%8+1);
    }
    void print() override {
        cout << "|" << setw(10) << this->Name << setw(10) << this->SecondName << "|" << setw(33) << this->number;
        cout << "|" << setw(12) << this->passID << setw(4) << "|" << setw(12) << "Shift: "  << this->shift << setw(14) << "|" << setw(20) << this->work << setw(7) << "|" << endl;
    }
};






class Main {

private:

    // working method
    void deleteOneElement(Human** List, int& size, int check);
    void addOneElement(Human** List, int& size, int check);
    void rewriteOneElement(Human** List, int& size, int check);
    void Sort(Human** List, int size, int button);
    void create(Human** List, int size);
    void printList(Human** List, int size);

public:
    void main();
    ~Main() {};
};
