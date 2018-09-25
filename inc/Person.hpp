#pragma once
#include <string>
#include <sstream>
#include <array>
#include <iostream>

using namespace std;

class Person
{
        string pesel_;
        string firstName_;
        string lastName_;
        string sex_;
        string address_;
    
    public:
        Person( string pesel, 
                string firstName, 
                string lastName, 
                string sex, 
                string address);
        
        virtual unsigned int getIndex() const {return 0;}
        virtual unsigned int getSalary() const {return 0;}
        virtual void setSalary(unsigned int) = 0;
        
        string getPesel() const noexcept;
        string getFirstName() const noexcept;
        string getLastName() const noexcept;
        string getSex() const noexcept;
        string getAddress() const noexcept;
        
        void setFirstName(string) noexcept;
        void setAddress(string) noexcept;
        
        bool verifyPesel(string pesel);
        std::string toString() const noexcept;
        void showPerson();
};
