#pragma once
#include <iostream>
#include <iomanip>
#define DEBUG
using namespace std;
int func(int(*p)(int* A, int N), int* A, int N);
void Fill( int*A, int N);
void PRINT(int*A, int N);
int Booble_sort(int*A, int N);
int Shell_sort(int*A, int N);
int Gnome_sort(int* A, int N);
