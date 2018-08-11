#include "Employee.hpp"

Employee::Employee( std::string pesel, 
                    std::string firstName, 
                    std::string lastName, 
                    std::string sex, 
                    std::string address, 
                    int salary)
    : Person(pesel, firstName, lastName, sex, address)
    , salary_(salary)
{}

unsigned int Employee::getSalary() const
{
    return this -> salary_;
}
void Employee::setSalary(unsigned int salary)
{
    salary_ = salary;
}
unsigned int Employee::getIndex() const
{
    return 0;
}
