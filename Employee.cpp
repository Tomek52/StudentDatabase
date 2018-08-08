#include "Employee.hpp"

Employee::Employee(std::string pesel, std::string firstName, std::string lastName, char sex, std::string address, unsigned int salary)
    : Person(pesel, firstName, lastName, sex, address)
    , salary_(salary)
{}

unsigned int Employee::getIndex() const
{
    return std::numeric_limits<int>::max();
}

unsigned int Employee::getSalary() const
{
    return this -> salary_
}
void Employee::setSalary(unsigned int salary)
{
    salary_ = salary;
}
