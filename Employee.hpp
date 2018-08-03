#pragma once
#include <iostream>
#include <string>
#include <limits>
#include "Person.hpp"

class Employee : public Person
{
    private:
        int salary_;
    public:
        Employee(std::string, std::string, std::string, char, Address*, int);
        int getIndex() const;    
        int getSalary() const;
};
