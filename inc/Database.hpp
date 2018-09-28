#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Student.hpp"
#include "Employee.hpp"
#include <exception>
#include <array>
#include "ownException.hpp"

using namespace std;

class Database
{
    vector<Person*> data;

public:

    void addToDatabase(Person* s);
    
    Person* findByPesel(const string & pesel);

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
    void showDatabase(string message);

    void clearDatabase();

};

