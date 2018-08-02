#pragma once
#include <iostream>
#include <string>
#include "Person.hpp"
class Employee : public Person
{
    private:
        int salary_;
    public:
        Employee(std::string, std::string, std::string, char, std::string address, int);

};
