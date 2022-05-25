#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

struct Node
{
    Node* next;
    Node* prev;
    char* name = new char[15];
    char type;
    int count;
    float weight;
};



void CreateListConsole();// user`s input
void CreateListRandom(); // randomize the information
void LoadFromFile(); // reading from data.txt
void PrintList();// print list table information
void PrintListReverse();// print list table information reversed
void SearchByDenomination(Node* p);// searching by name
void SearchByType(Node* p);// searhing by type
void SearchByQuantity(Node* p);//searhing by count
void SearchByWeight(Node* p); // searhing by weigth
void AddTermBegin(); // adding new item in the beginning of the list
void AddTermEnd();// adding new item in the end of the list
void AddTermTag();// inserting item
void DeleteTermBegin();// delete from the beginnng of list
void DeleteTermEnd();// delete from the end of list
void RemoveTermTag();// remove inserted item
void SortTerm(int set);// sorting information
void SaveInFile();// writing in data.txt
bool checkNULL();// cheking on empty
void FreeList();// clean list
