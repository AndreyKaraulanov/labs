#include "lab.hpp"
#include "Master.h"
int Master::count = 0;
ostream& operator<<(ostream& out, const Dog& ob) {
    out << "Êëè÷êà:" << " " << ob.nickname << endl;;
    out << "Âåñ:" << " " << ob.weight << endl;;
    out << "Âîçðàñò:" << " " << ob.age << endl;
    return out;
}
Dog::Dog() {
    nickname="Òóçèê";
    weight = 0;
    age = 0;
}
Dog::Dog(string nickname, int weight, int age) {
    this->nickname = nickname;
    this->weight = weight;
    this->age = age;
}
Dog::Dog(const Dog& other) {
    nickname = other.nickname;
    weight = other.weight;
    age = other.age;
}
void Dog::setdog(string nickname, int weight, int age) {
    this->nickname = nickname;
    this->weight = weight;
    this->age = age;

}
Master::~Master() {
    delete[] dog;
}
Master:: Master(){
     name="Ïåòðîâ";
}
Master::Master(string name) {
    this->name = name;
}
Master::Master(Master& other) {
    name = other.name;
}
int Master::getcount() {
    return count;
}
void Master::setcount() {
    count++;
}
void Master:: dog_create_memory(int amount_dog) {
    dog = new Dog[amount_dog];
}
void Master::setmaster(string name,  Dog dogs[], int i) {
        this->name = name;
        dog[i] = dogs[i];
}
string Master::getmastername() {
    return name;
}
Dog Master::getmasterdog(int i) {
        return dog[i];
}
const long int Master::getid() {
    return id;
}
