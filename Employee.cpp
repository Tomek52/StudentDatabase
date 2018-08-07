#include "Employee.hpp"

Employee::Employee(std::string pesel, std::string firstName, std::string lastName, char sex, Address* address, unsigned int salary)
    : Person(pesel, firstName, lastName, sex, address)
    , salary_(salary)
{}

unsigned int Employee::getIndex() const
{
    return 0;
}

unsigned int Employee::getSalary() const
{
    return this -> salary_;
}
void Employee::setSalary(unsigned int salary)
{
    salary_ = salary;
}
