#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Student.hpp"
#include <exception>
#include "Person.hpp"

class Database
{
public:
    void addToDatabase(Person* s);
    void showDatabase();
    void removeStudent(const int&);
    void sortByIndex();
    void sortByLastName();
    void sortBySalary();
    void addToExternalFile();
    void loadFromExternalFile();
    void modifySalaryByPesel(int salary, std::string pesel);
};

class OpenFileError : public std::exception
{
public:
    const char* what();
};
