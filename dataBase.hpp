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
        void addToDatabase();
        void showDatabase();
        void removeStudent(const int&);
        void sortDatabase();
        void menu();
        void addToExternalFile();
        void loadFromExternalFile();
};
