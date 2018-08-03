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
<<<<<<< HEAD
        Person(std::string pesel, std::string firstName, std::string lastName, char sex, std::string address);
        virtual ~Person() {}
        std::string getPesel() const;
=======
        Person(std::string pesel, std::string firstName, std::string lastName, char sex, Address* address);
        virtual ~Person();
        int getPesel() const;
        void setPesel(int pesel);
>>>>>>> parent of 608959e... added constructor and get* to person
        std::string getFirstName() const;
        void setFirstName(std::string);
        std::string getLastName() const;
<<<<<<< HEAD
        char getSex() const;
        std::string getAddress() const;
        void showPerson() const;



=======
        void setLastName(std::string);
        
>>>>>>> parent of 608959e... added constructor and get* to person
        bool verifyPesel(std::string pesel);
};
