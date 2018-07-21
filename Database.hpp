#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Student.hpp"
#include <exception>

class Database
{
public:
    void addToDatabase(Student& s);
    void showDatabase();
    void removeStudent(const int&);
    void sortDatabase();
    void addToExternalFile();
    void loadFromExternalFile();
};

class OpenFileError : public std::exception
{
public:
    const char* what();
};