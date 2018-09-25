#pragma once
#include <iostream>
#include <string>
#include <limits>
#include "Person.hpp"

using namespace std;

class Employee : public Person
{
        unsigned int salary_;

    public:
        Employee(   string, 
                    string, 
                    string, 
                    string, 
                    string, 
                    int);

        virtual unsigned int getIndex() const; 

        unsigned int getSalary() const noexcept;

        void setSalary(unsigned int) noexcept;
};
