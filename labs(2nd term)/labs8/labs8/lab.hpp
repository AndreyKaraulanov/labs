#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;






struct Node
{
    Node* next;
    Node* prev;
    char name[15];
    char type;
    int count;
    float weight;
};






Node* CreateListConsole();// user`s input
Node* CreateListRandom();// randomize the information
Node* LoadFromFile();// reading from data.txt
void PrintList(Node* begin);// print list table information
void SearchByDenomination(Node* begin); // searching by name
void SearchByType(Node* begin);// searhing by type
void SearchByQuantity(Node* begin);// searhing by count
void SearchByWeight(Node* begin);// searhing by weigth
void AddTermBegin(Node** begin);// adding new item in the beginning of the list
void AddTermEnd(Node* begin);// adding new item in the end of the list

void DeleteTermBegin(Node** begin);// delete from the beginnng of list
void DeleteTermEnd(Node** begin);// delete from the end of list
int countLine(Node* begin);
void SortTerm(Node* begin, int set); // sorting information
void SaveInFile(Node* begin);// writing in data.txt
void FreeList(Node** begin);// clean list
bool checkNULL(Node* begin);// cheking on empty
