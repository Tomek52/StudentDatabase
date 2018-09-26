#pragma once
#include <iostream>
#include <string>
#include "Person.hpp"

using namespace std;

class Student : public Person
{
    unsigned int index_;

    public:
    Student(    const string& pesel, 
                const string& firstName, 
                const string& lastName, 
                const string& sex, 
                const string& address, 
                unsigned int index);

    Student(const string & packedData);

    unsigned int getIndex() const;
    
    string toString( char delimeter = ' ') const;
};
