#pragma once

#include <iostream>

using namespace std;

void AddStudent(int* numberofstudents, char*** nameslist, int** yearlist, const char* name, const int year);

void Cat(int numberofstudents, char** nameslist);
void Cat(int numberofstudents, int* yearslist);

void ClearList (int numberofstudents, char*** nameslist);
void ClearList (int numberofstudents, int** yearslist);