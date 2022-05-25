#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <fstream>
#include "windows.h";
using namespace System::Windows::Forms;
using namespace System;
using namespace System::IO;
using namespace std;

int GetSizeFile();
void check();
void append();
void engrus();
void ruseng();

std::string& Convert_String_to_string(String^ s, std::string& os); //convert System::string^ TO std::string

String^ Convert_string_to_String(std::string& os, String^ s); //convert std::string TO System::string^

std::string& Convert_String_to_string(String^ s); //convert System::string^ TO std::string

String^ Convert_string_to_String(std::string& os);