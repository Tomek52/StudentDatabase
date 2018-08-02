#include "Employee.hpp"

Employee::Employee(std::string pesel, std::string firstName, std::string lastName, char sex, std::string address, int salary)
    : Person(pesel, firstName, lastName, sex, address)
    , salary_(salary)
{}
