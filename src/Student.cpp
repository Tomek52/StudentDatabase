#include "Student.hpp"
#include <limits>
#include <string>


Student::Student(   const string& pesel, 
                    const string& firstName, 
                    const string& lastName, 
                    const string& sex, 
                    const string& address, 
                    unsigned int index)
    : Person(pesel, firstName, lastName, sex, address)
    , index_(index)
{}

Student::Student(const string & packedData)
    : Person(packedData)
    , index_(std::stoi(packedData.substr(92, 7)))
{}

unsigned int Student::getIndex() const
{
    return this->index_;
}

string Student::toString( char delimeter ) const
{
    stringstream ss;

    ss  << "Student: " 
        << Person::toString(delimeter)
        << setw(7) << index_ << endl;
    
    return ss.str();

}
