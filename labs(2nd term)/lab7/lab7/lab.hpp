#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

#define amount_of_elements 3




struct Table {

    char* oboz = new char[15];
    char type;
    int name;
    float am;

};


void input_backlist(Table tab);
void random(Table tab);
void print(Table tab);
void print_all(Table tab);
void listNumberPrint(Table tab);
void input_forvardlist(Table tab);
