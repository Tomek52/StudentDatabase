#pragma once
#include <iostream>
#include <string>
#include "Person.hpp"

class Student : public Person
{
private:
    unsigned int index_;
    public:
    Student(    std::string pesel, 
                std::string firstName, 
                std::string lastName, 
                std::string sex, 
                std::string address, 
                unsigned int index);
    virtual unsigned int getIndex() const;
    void setIndex(unsigned int);
    void showStudent() const;
    virtual unsigned int getSalary() const;
    void setSalary(unsigned int);
};