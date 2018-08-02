#include "Employee.hpp"

Employee::Employee(std::string pesel, std::string firstName, std::string lastName, char sex, Address* address, int salary)
    : Person(pesel, firstName, lastName, sex, address)
    , salary_(salary)
{}

int Employee::getIndex() const
{
    return 0;
}

int Employee::getSalary() const
{
    return this -> salary_;
}
