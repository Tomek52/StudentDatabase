#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Student.hpp"
#include "Employee.hpp"
#include <exception>

class Database
{
public:
    void addToDatabase(Person& p);
    void removeStudent(const int&);
    void sortDatabase();
    void addToExternalFile();
    void loadFromExternalFile();
    void showDatabase();
    void showByLastName(std::string lastName); //to do
    void showByPesel(std::string pesel); //to do
    void sortBySalary(); //to do
    void sortByPesel();
    void sortByLastName(); //to do
    void deleteByPesel(std::string pesel); //to do
    void modifyAddressAndSalaryByPesel(std::string pesel); // to do


};

class OpenFileError : public std::exception
{
public:
    const char* what();
};
