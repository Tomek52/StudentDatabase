#include "Person.hpp"
#include <array>
#include <iostream>
#include <string>

bool Person::verifyPesel(std::string pesel)
{
    if(pesel.size()!=11) return false;
    
    const std::array<int,10> numToCheckPesel = {9,7,3,1,9,7,3,1,9,7};
    int checkSum;
    int digit;
    for(int i=0; i<10; i++)
    {
        try
        {
            digit = (int) (pesel[i]);
            checkSum+=digit*numToCheckPesel[i];
        }
        catch(const std::invalid_argument& e)
        {
            std::cout<<"Invalid argument: "<<e.what()<<std::endl;
        }
        catch(...)
        {
            std::cout<<"Unknown error"<<std::endl;
        }
    }

    if(checkSum%10==pesel[10]) return true;
    else return false;
}

Person::Person(std::string pesel, std::string firstName, std::string lastName, char sex, Address* address)
    : pesel_(pesel)
    , firstName_(firstName)
    , lastName_(lastName)
    , sex_(sex)
    , address_(address)
{}

std::string Person::getPesel() const
{
    return this->pesel_;
}

std::string Person::getFirstName() const
{
    return this->firstName_;
}

std::string Person::getLastName() const
{
    return this->lastName_;
}

void Person::showPerson() const
{
    std::cout << "Pesel: " << this->getPesel() << std::endl;
    std::cout << "First name: " << this->getFirstName() << std::endl;
    std::cout << "Last name: " << this->getLastName() << std::endl;
    std::cout << "sex: " << this->getSex() << std::endl;
    std::cout << "Address: " << this->getAddrress() << std::endl;
    //std::cout << "Index: " << this->getIndex() << std::endl;
   // std::cout << "Salary: " << this->getSalary() << std::endl;
}
