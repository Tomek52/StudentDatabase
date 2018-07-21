#include "Student.hpp"
#include <limits>

Student::Student(int index,
    std::string firstName,
    std::string lastName)
    : firstName_(firstName)
    , lastName_(lastName)
{
    setIndex(index);
}

Student:: ~Student() {}

int Student::getIndex() const
{
    return this->index_;
}

std::string Student::getFirstName() const
{
    return this->firstName_;
}

std::string Student::getLastName() const
{
    return this->lastName_;
}

void Student::setIndex(int index)
{
    bool correctIndex = false;
    bool clear = false;
    double checkIndex = index / 100000;
    if (checkIndex >= 1.0 && checkIndex < 9.9)
        index_ = index;
    else
    {
        std::cout << "Incorrect " <<this->firstName_<<" "<<this->lastName_<<" index. It must contains 6 numbers !" << std::endl;
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

void Student::setFirstName(std::string firstName)
{
    firstName_ = firstName;
}

void Student::setLastName(std::string lastName)
{
    lastName_ = lastName;
}

void Student::showStudent() const
{
    std::cout << "Index: " << this->index_ << std::endl;
    std::cout << "First name: " << this->firstName_ << std::endl;
    std::cout << "Last name: " << this->lastName_ << std::endl;
}
