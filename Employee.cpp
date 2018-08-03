#include "Employee.hpp"

Employee::Employee(std::string pesel, std::string firstName, std::string lastName, char sex, Address* address, int salary)
    : Person(pesel, firstName, lastName, sex, address)
    , salary_(salary)
{}

int Employee::getIndex() const
{
    return std::numeric_limits<int>::max();
}

int Employee::getSalary() const
{
    return this -> salary_
}
