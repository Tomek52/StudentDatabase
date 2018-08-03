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
        std::string address_;
    public:
        Person(std::string pesel, std::string firstName, std::string lastName, char sex, std::string address);
        virtual ~Person();
        int getPesel() const;
        
        Person(std::string pesel, std::string firstName, std::string lastName, char sex, Address* address);
        virtual ~Person();
        int getPesel() const;
        void setPesel(int pesel);
        std::string getFirstName() const;
        void setFirstName(std::string);
        std::string getLastName() const;
        char getSex() const;
        std::string getAddress() const;
        void showPerson() const;



        std::string getFirstName() const;
        void setFirstName(std::string);
        std::string getLastName() const;
        void setLastName(std::string);
        
        bool verifyPesel(std::string pesel);
};
