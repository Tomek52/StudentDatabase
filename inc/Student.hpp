#pragma once
#include <iostream>
#include <string>
#include "Person.hpp"

using namespace std;

class Student : public Person
{
    unsigned int index_;

    public:
    Student(    string pesel, 
                string firstName, 
                string lastName, 
                string sex, 
                string address, 
                unsigned int index);

    virtual unsigned int getIndex() const;
    virtual unsigned int getSalary() const;
    
    void setSalary(unsigned int) noexcept;
    virtual void setIndex(unsigned int);

    void showStudent() const;
    
};
