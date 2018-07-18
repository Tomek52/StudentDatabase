#pragma once
#include <iostream>
#include <string>

class Student
{
private:
    int index_;
    std::string firstName_;
    std::string lastName_;
public:
    Student(int index, std::string firstName, std::string lastName);
    virtual ~Student();
    int getIndex() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    void setIndex(int);
    void setFirstName(std::string);
    void setLastName(std::string);
    void showStudent() const;
    friend std::istream& operator >> (std::istream& is, Student& s);
};
