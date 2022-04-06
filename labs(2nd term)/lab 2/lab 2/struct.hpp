#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

#define N 3


#define PRINT_TYPE
#define DEBUG

struct Table {

    string oboz;
    char type;
    int name;
    float am;

};

void in(Table tab[]);
void random(Table tab[]);
void sort(Table tab[]);
void print(Table tab[]);
