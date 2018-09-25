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
        
        virtual unsigned int getIndex() const {return 0;}
        virtual unsigned int getSalary() const {return 0;}
        virtual void setSalary(unsigned int) = 0;
        
        std::string getPesel() const noexcept;
        std::string getFirstName() const noexcept;
        std::string getLastName() const noexcept;
        std::string getSex() const noexcept;
        std::string getAddress() const noexcept;
        
        void setFirstName(std::string) noexcept;
        void setAddress(std::string) noexcept;
        
        bool verifyPesel(std::string pesel);
        void showPerson() const;
              
};
