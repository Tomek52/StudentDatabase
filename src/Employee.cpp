#include "Employee.hpp"


Employee::Employee( string pesel, 
                    string firstName, 
                    string lastName, 
                    string sex, 
                    string address, 
                    int salary)
    : Person(pesel, firstName, lastName, sex, address)
    , salary_(salary)
{}

unsigned int Employee::getSalary() const noexcept
{
    return this->salary_;
}

void Employee::setSalary(unsigned int salary) noexcept
{
    salary_ = salary;
}

unsigned int Employee::getIndex() const
{
    return 0;
}
