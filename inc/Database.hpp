#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Student.hpp"
#include "Employee.hpp"
#include <exception>

using namespace std;

class Database
{
    vector<Person*> data;

    void loadFromExternalFileShowSwitch(unsigned short int &);

public:

    void addToDatabase(Person* s);
    
    void removeStudentByIndex(const unsigned int&);
    void removePersonByPesel(string);

    void sortByIndex();
    void sortByLastName();
    void sortBySalary();

    void addToExternalFile();
    void loadFromExternalFile();

    void modifySalaryByPesel(unsigned int salary, string pesel);
    void modifyAddressByPesel(string address, string pesel);

    void showByLastName(string);
    void showByPesel(string);
    void showDatabase();

};

class OpenFileError : public exception
{
public:
    char* what();
};
