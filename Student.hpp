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
    Student();
    Student(int index, std::string firstName, std::string lastName);
    ~Student();
    int getIndex() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    void showStudent() const;
    void setIndex(int);
    void setFirstName(std::string);
    void setLastName(std::string);
    friend std::ostream& operator<<(std::ostream& os, const Student& s);
    friend std::istream& operator >> (std::istream& is, Student& s);
};
