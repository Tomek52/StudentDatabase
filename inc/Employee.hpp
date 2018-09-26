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
        Employee( const string& pesel, 
                  const string& firstName, 
                  const string& lastName, 
                  const string& sex, 
                  const string& address, 
                  int salary );
        Employee(const string & packedData);
        unsigned int getSalary() const noexcept;
        void setSalary(unsigned int) noexcept;
        
        string toString(char delimeter = ' ') const;
};
