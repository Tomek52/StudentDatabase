#pragma once
#include <string>

class Person
{
    private:
        std::string pesel_;
        std::string firstName_;
        std::string lastName_;
        std::string sex_;
        std::string address_;
    public:
        Person( std::string pesel, 
                std::string firstName, 
                std::string lastName, 
                std::string sex, 
                std::string address);
        
        std::string getPesel() const;
        std::string getFirstName() const;
        void setFirstName(std::string);
        std::string getLastName() const;
        virtual unsigned int getIndex() const {return 0;}
        virtual unsigned int getSalary() const {return 0;}
        std::string getSex() const;
        std::string getAddress() const;
        bool verifyPesel(std::string pesel);
        void showPerson() const;
        virtual void setSalary(unsigned int) = 0;
        void setAddress(std::string);
        
};
