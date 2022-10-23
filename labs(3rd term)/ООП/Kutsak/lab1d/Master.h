#pragma once
#include <iostream>

using namespace std;
class Master {
private:
    string name;
    const long int id = 108206;
    static int count;
    Dog* dog;
public:
    ~Master();
     Master();
     Master(string name);
     Master(Master& other);
     void dog_create_memory(int amount);
     void setmaster(string name, Dog dogs[], int i);
     string getmastername();
     Dog getmasterdog(int i);
     int getcount();
     void setcount();
     const long int getid();
};
