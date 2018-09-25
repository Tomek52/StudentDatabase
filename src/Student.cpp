#include "Student.hpp"
#include <limits>
#include <string>
Student::Student(   std::string pesel, 
                    std::string firstName, 
                    std::string lastName, 
                    std::string sex, 
                    std::string address, 
                    unsigned int index)
    : Person(pesel, firstName, lastName, sex, address)
{
    setIndex(index);
}

unsigned int Student::getIndex() const
{
    return index_;
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
        std::cout << "Incorrect " <<this->getFirstName()<<" "<<this->getLastName()<<" index. It must contains 6 numbers !" << std::endl;
        do
        {
            std::cout << "Input correct index: ";
            if (clear)
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            std::cin >> index_;

            if (!std::cin)
            {
                std::cout << std::endl;
                std::cout << "Index can contains only numbers !" << std::endl;
                correctIndex = false;
                clear = true;
            }
            else
            {
                checkIndex = index_ / 100000;
                if (checkIndex < 1.0 || checkIndex > 9.9)
                {
                    std::cout << "Incorrect index. It must contains 6 numbers !" << std::endl;
                    std::cout << "First number cannot be 0 !" << std::endl;
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
    std::cout << "Index: " << getIndex() << std::endl;
    std::cout << "First name: " << getFirstName()  << std::endl;
    std::cout << "Last name: " << getLastName() << std::endl;
}

unsigned int Student::getSalary() const
{
    return 0;
}
void Student::setSalary(unsigned int) {}
