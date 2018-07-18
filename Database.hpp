#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Student.hpp"

class dataBase
{
public:
    void addToDatabase(); //dynamic adding students
    void addToDatabase(Student& s);  //static adding students
    void showDatabase();
    void removeStudent(const int&);
    void sortDatabase();
    void addToExternalFile();
    void loadFromExternalFile();
};
