#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Dog {
private:
    string nickname;
    int weight;
    int age;
public:
    Dog();
    Dog(string nickname, int weight, int age);
    Dog(const Dog& other);
    friend ostream& operator<<(ostream& out, const Dog& ob);
    void setdog(string nickname, int weight, int age);
};
