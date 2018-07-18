#include "Student.hpp"

Student::Student(int index,
    std::string firstName,
    std::string lastName)
    : index_(index)
    , firstName_(firstName)
    , lastName_(lastName)
{}

Student:: ~Student() {}

int Student::getIndex() const
{
    return this->index_;
}

std::string Student::getFirstName() const
{
    return this->firstName_;
}

std::string Student::getLastName() const
{
    return this->lastName_;
}

void Student::setIndex(int index)
{
    index_ = index;
}

void Student::setFirstName(std::string firstName)
{
    firstName_ = firstName;
}

void Student::setLastName(std::string lastName)
{
    lastName_ = lastName;
}

void Student::showStudent() const
{
    std::cout << "Index: " << this->index_ << std::endl;
    std::cout << "First name: " << this->firstName_ << std::endl;
    std::cout << "Last name: " << this->lastName_ << std::endl;
}
