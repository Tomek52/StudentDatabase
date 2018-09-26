#pragma once
#include <string>
#include <sstream>
#include <array>
#include <iostream>
#include <iomanip>

using namespace std;

class Person
{
        string pesel_;
        string firstName_;
        string lastName_;
        string sex_;
        string address_;
    
    public:
        Person( const string& pesel, 
                const string& firstName, 
                const string& lastName, 
                const string& sex, 
                const string& address);
        
        Person(const string & packedData);
        
        virtual ~Person(){}

        virtual unsigned int getIndex() const {return 0;}
        virtual unsigned int getSalary() const {return 0;}
        virtual void setSalary(unsigned int){};
        
        string getPesel() const noexcept;
        string getFirstName() const noexcept;
        string getLastName() const noexcept;
        string getSex() const noexcept;
        string getAddress() const noexcept;
        
        void setFirstName(string& firstName) noexcept;
        void setAddress(string& address) noexcept;
        
        bool verifyPesel(string& pesel);
        string toString(char delimeter = ' ') const;
        void showPerson();
};
