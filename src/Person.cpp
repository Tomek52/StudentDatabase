#include "Person.hpp"


Person::Person( const string& pesel,
                const string& firstName, 
                const string& lastName, 
                const string& sex, 
                const string& address)
    : pesel_(pesel)
    , firstName_(firstName)
    , lastName_(lastName)
    , sex_(sex)
    , address_(address)
{}

Person::Person(const string &packedData)
    : firstName_(packedData.substr(10, 12))
    , lastName_(packedData.substr(23, 12))
    , pesel_(packedData.substr(36, 11))
    , sex_(packedData.substr(48, 1))
    , address_(packedData.substr(50, 40))
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

void Person::setFirstName(string& firstName) noexcept
{
    firstName_ = firstName;
}

void Person::setAddress(string& address) noexcept
{
    address_ = address;
}

bool Person::verifyPesel(string& pesel)
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

string Person::toString(char delimeter) const
{
    stringstream ss;
    
    ss  << setw(12) << getFirstName() << delimeter
        << setw(12) << getLastName()  << delimeter
        << setw(11) << getPesel()     << delimeter
        << setw(1)  << getSex()       << delimeter
        << setw(40) << getAddress()   << delimeter;

    return ss.str(); 
}

void Person::showPerson()
{
    cout << toString();
}
