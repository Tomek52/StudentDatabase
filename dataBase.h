#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

namespace dataBase
{
    void addToDatabase();
    void showDatabase();
    void removeStudent(const int&);
    void sortDatabase();
    void menu();
    void addToExternalFile();
    void loadFromExternalFile();
}
