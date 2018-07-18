#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Student.hpp"

class Database
{
public:
    void addToDatabase(Student& s);  //static adding students
    void showDatabase();
    void removeStudent(const int&);
    void sortDatabase();
    void addToExternalFile();
    void loadFromExternalFile();
};
