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
    void loadFromExternalFileShowSwitch(unsigned short int &);
public:
    void addToDatabase(Person* s);
    void showDatabase();
    void removeStudentByIndex(const int&);
    void removePersonByPesel(std::string);
    void sortByIndex();
    void sortByLastName();
    void sortBySalary();
    void addToExternalFile();
    void loadFromExternalFile();
    void modifySalaryByPesel(int salary, std::string pesel);
    void showByLastName(std::string);
    void showByPesel(std::string);
};

class OpenFileError : public std::exception
{
public:
    const char* what();
};
