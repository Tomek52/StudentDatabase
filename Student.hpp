#pragma once
#include <iostream>
#include <string>
#include "Person.hpp"

class Student : public Person
{
private:
    int index_;
    public:
    Student(std::string pesel, std::string firstName, std::string lastName, char sex, std::string address, int index);
    virtual ~Student();
    int getIndex() const;
    void setIndex(int);
    void showStudent() const;
};
