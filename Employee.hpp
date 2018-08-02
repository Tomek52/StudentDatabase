#pragma once
#include <iostream>
#include <string>
#include "Person.hpp"
class Employee : public Person
{
    private:
        unsigned short int salary_;
    public:
        Employee(std::string, std::string, std::string, char, std::string, unsigned int);
        unsigned short int getSalary() const;
        void setSalary(unsigned short int salary);
        void showPerson() const;

};
