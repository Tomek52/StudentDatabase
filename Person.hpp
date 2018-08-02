#pragma once
#include <string>

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
        virtual ~Person() {}
        std::string getPesel() const;
        std::string getFirstName() const;
        std::string getLastName() const;
        char getSex() const;
        std::string getAddress() const;
        void showPerson() const;



        bool verifyPesel(std::string pesel);
};
