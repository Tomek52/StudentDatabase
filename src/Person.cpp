#include "Person.hpp"


Person::Person( string pesel, 
                string firstName, 
                string lastName, 
                string sex, 
                string address)
    : pesel_(pesel)
    , firstName_(firstName)
    , lastName_(lastName)
    , sex_(sex)
    , address_(address)
{}

string Person::getPesel() const noexcept
{
    return pesel_;
}

string Person::getFirstName() const noexcept
{
    return firstName_;
}

string Person::getLastName() const noexcept
{
    return lastName_;

}

string Person::getSex() const noexcept
{
    return sex_;
}
 
string Person::getAddress() const noexcept
{
    return address_;
}

void Person::setFirstName(string firstName) noexcept
{
    firstName_ = firstName;
}

void Person::setAddress(string address) noexcept
{
    address_ = address;
}

bool Person::verifyPesel(string pesel)
{
    if (pesel.size() != 11) return false;
    
    const array<int,10> numToCheckPesel = {9,7,3,1,9,7,3,1,9,7};
    int checkSum = 0;
    int digit;
    for(int i = 0; i < 10; i++)
    {
        try
        {
            digit = pesel[i]-48;
            checkSum += (digit * numToCheckPesel[i]);
        }
        catch(const invalid_argument& e)
        {
            cout << "Invalid argument: " << e.what() << endl;
        }
        catch(...)
        {
            cout << "Unknown error" << endl;
        }
    }

    if(((checkSum%10)+48) == pesel[10]) return true;
    else return false;
}

std::string Person::toString() const noexcept
{
    stringstream ss;
    ss  << "Pesel: " << getPesel()
        << " " << getFirstName()
        << " " << getLastName()
        << " " << getSex() << endl
        << "Address: "
        << getAddress()
        << " Index: " << getIndex()
        << " Salary: " << getSalary() << endl
        << "------" << endl;
    return ss.str();
}

void Person::showPerson()
{
    cout << toString();
}
