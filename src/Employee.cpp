#include "Employee.hpp"


Employee::Employee( const string& pesel, 
                    const string& firstName, 
                    const string& lastName, 
                    const string& sex, 
                    const string& address, 
                    int salary )
    : Person(pesel, firstName, lastName, sex, address)
    , salary_(salary)
{}

Employee::Employee(const string & packedData)
    : Person(packedData)
    , salary_(std::stoi(packedData.substr(92, 7)))
{}

unsigned int Employee::getSalary() const noexcept
{
    return salary_;
}

void Employee::setSalary(unsigned int salary) noexcept
{
    salary_ = salary;
}

string Employee::toString(char delimeter) const
{
    stringstream ss;

    ss  << "Employee: "
        << Person::toString(delimeter)
        << setw(7) << getSalary() << " PLN" << endl;

    return ss.str();
}
