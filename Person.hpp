#pragma once
#include <string>
#include "Address.hpp"

class Person
{
    private:
        std::string pesel_;
        std::string firstName_;
        std::string lastName_;
        char sex_;
        Address* address_;
    public:
        Person(std::string pesel, std::string firstName, std::string lastName, char sex, Address* address);
        virtual ~Person();
        int getPesel() const;
        std::string getFirstName() const;
        void setFirstName(std::string);
        std::string getLastName() const;
        
        bool verifyPesel(std::string pesel);
};
