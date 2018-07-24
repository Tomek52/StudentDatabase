#pragma once
#include <string>
#include "Address.hpp"

class Person
{
    private:
        int pesel_;
        std::string firstName_;
        std::string lastName_;
        char sex_;
        Address* address_
    public:
        Person(int pesel, std::string firstName, std::string lastName, char sex, Address* address);
        virtual ~Person();
        int getPesel() const;
        void setPesel(int pesel);
        std::string getFirstName() const;
        void setFirstName(std::string);
        std::string getLastName() const;
        void setLastName(std::string);
};
