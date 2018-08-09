#pragma once
#include <iostream>
#include <string>
#include <limits>
#include "Person.hpp"

class Employee : public Person
{
    private:
        unsigned int salary_;
    public:
        Employee(   std::string, 
                    std::string, 
                    std::string, 
                    std::string, 
                    std::string, 
                    int);
        virtual unsigned int getIndex() const;    
        unsigned int getSalary() const;
        void setSalary(unsigned int);
};
