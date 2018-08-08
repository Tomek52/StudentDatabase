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
        virtual unsigned int getIndex() const {return 0;}
        virtual unsigned int getSalary() const {return 0;}
        char getSex() const;
        std::string getAddress() const;
        bool verifyPesel(std::string pesel);
        void showPerson() const;
        virtual void setSalary(unsigned int) = 0;
};
