#pragma once
#include <iostream>
#include <string>
#include "Person.hpp"

class Student : public Person
{
private:
    int index_;
    public:
    Student(int index, std::string firstName, std::string lastName);
    virtual ~Student();
    int getIndex() const;
    void setIndex(int);
    void showStudent() const;
};
