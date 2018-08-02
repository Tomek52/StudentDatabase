#include "Employee.hpp"

Employee::Employee(std::string pesel, std::string firstName, std::string lastName, char sex, std::string address, int salary)
    : Person(pesel, firstName, lastName, sex, address)
    , salary_(salary)
{}
unsigned short int Employee::getSalary() const
{
    return this->salary_;
}
void Employee::setSalary(unsigned short int salary)
{
    salary_ = salary;
}
void Employee::showPerson() const
{
    std::cout << "Salary:     " << this->getSalary()  << std::endl;
    Person::showPerson();
}
