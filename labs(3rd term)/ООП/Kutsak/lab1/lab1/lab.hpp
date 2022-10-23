#pragma once
#include <iostream>
#include <iomanip>
#pragma warning (disable: 4996)
#define M 3
using namespace std;
class Antilops {
private:
    string surname;
    string name;
    string secname;
    string adress;
    int num;
    string diagnosis;
public:
    Antilops();
    void data(Antilops antilop[]);
    void print();
    void print_obj(Antilops antilop[]);
    void search_by_diagnisis(Antilops antilop[]);
    void search_by_num(Antilops antilop[]);
};
