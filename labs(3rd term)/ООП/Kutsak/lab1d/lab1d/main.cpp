#pragma warning (disable: 4996)
#include <iostream>
#include "lab.hpp"
#include "Master.h"
int main()
{
    string nickname, name; int age, weight, amount_dog, amount_master;
    Dog* dogs;
    while (true) {
        cout << "Сколько владельцев будем вписывать?" << endl;
        cin >> amount_master;
        Master* master = new Master[amount_master];
        for (int j = 0; j < amount_master;j++) {
            master[j].setcount();
        }
        const char* holder[4] = { "Лиза", "Миша", "Соня", "Катя" };
        const char* dogsnick[4] = { "Тузик", "Рекс", "Бим", "Гера" };
        for (int i = 0; i < amount_master;i++) {
            name = holder[rand() % 4];
            cout << "Введите количество собак у хозяина:" << " " << name << endl;
            cin >> amount_dog;
            dogs = new Dog[amount_dog];
            master[i].dog_create_memory(amount_dog);
            for (int j = 0; j < amount_dog; j++) {
                nickname = dogsnick[rand() % 4];
                weight = rand() % 50 + 1;
                age = rand() % 20 + 1;
                dogs[j].setdog(nickname, weight, age);
                master[i].setmaster(name, dogs, j);
            }
            delete[]dogs;
            cout << "Информация по мастеру" << " " << master[i].getmastername() << endl;
            cout << "Имя:" << " " << master[i].getmastername() << endl;
            cout << "Информация по его/её собакам:" << endl;
            for (int k = 0;k < amount_dog; k++)
                cout << master[i].getmasterdog(k);
        }
        cout << "Количество членов клуба:" << " " << master->getcount() << endl;
        cout << "ID:" << " " << master->getid() << endl;
        delete[]master;
    }
}
