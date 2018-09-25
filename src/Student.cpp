#include "Student.hpp"
#include <limits>
#include <string>


Student::Student(   string pesel, 
                    string firstName, 
                    string lastName, 
                    string sex, 
                    string address, 
                    unsigned int index)
    : Person(pesel, firstName, lastName, sex, address)
    , index_(index)
{}

unsigned int Student::getIndex() const
{
    return this->index_;
}

unsigned int Student::getSalary() const
{
    return 0;
}

void Student::setSalary(unsigned int)
{
    return ;
}

void Student::setIndex(unsigned int index)
{
    bool correctIndex = false;
    bool clear = false;
    double checkIndex = index / 100000;
    if (checkIndex >= 1.0 && checkIndex < 9.9)
        index_ = index;
    else
    {
        cout << "Incorrect " << this->getFirstName() << " " << this->getLastName() << " index. It must contains 6 numbers !" << endl;
        do
        {
            cout << "Input correct index: ";
            if (clear)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cin >> index_;

            if (!cin)
            {
                cout << endl;
                cout << "Index can contains only numbers !" << endl;
                correctIndex = false;
                clear = true;
            }
            else
            {
                checkIndex = index_ / 100000;
                if (checkIndex < 1.0 || checkIndex > 9.9)
                {
                    cout << "Incorrect index. It must contains 6 numbers !" << endl;
                    cout << "First number cannot be 0 !" << endl;
                    correctIndex = false;
                    clear = true;
                }
                else
                {
                    correctIndex = true;
                }
            }
        } while (correctIndex == false);
    }
}

void Student::showStudent() const
{
    cout << "Index: " << getIndex() << endl;
    cout << "First name: " << getFirstName()  << endl;
    cout << "Last name: " << getLastName() << endl;
}
