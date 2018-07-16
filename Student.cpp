#include "Student.hpp"

Student::Student() {}

Student::Student(int index,
                std::string firstName,
                std::string lastName)
		: index_(index)
		, firstName_(firstName)
	 	, lastName_(lastName)
{}

Student::~Student() {}

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
    this->index_=index;
}

void Student::setFirstName(std::string firstName)
{
    this->firstName_=firstName;
}

void Student::setLastName(std::string lastName)
{
    this->lastName_=lastName;
}

void Student::showStudent() const
{
    std::cout << "Index: " << this->index_ << std::endl;
    std::cout << "First name: " << this->firstName_ << std::endl;
    std::cout << "Last name: " << this->lastName_ << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Student& s)
{
    os << "Index: " << s.index_ << std::endl;
    os << "First name: " << s.firstName_ << std::endl;
    os << "Last name: " << s.lastName_ << std::endl;
    return os;
}

std::istream& operator>>(std::istream& is, Student& s)
{
    double checkIndex;
    bool correctIndex = false;
    std::cout << "Input  student's data" << std::endl;
    do
    {
        std::cout << "Input index: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> s.index_;
	if (!std::cin)
	{
	    std::cout << std::endl;
	    std::cout << "Index can contains only numbers !" << std::endl;
	    correctIndex = false;
	}
	else
	{
	    checkIndex = s.index_ / 100000;
	    if (checkIndex < 1.0 || checkIndex > 9.9)
	    {
            std::cout << "Incorrect index. Your index must contains 6 numbers !" << std::endl; //standard pwr index
            std::cout << "First number cannot be 0 !" << std::endl;
            correctIndex = false;
	    }
	    else
	    {
	        correctIndex = true;
	    }
	}
	} while (correctIndex == false);
	std::cout << "Input First name: ";
	std::cin >> s.firstName_;
	std::cout << "Input Last name: ";
	std::cin >> s.lastName_;
	return is;
}
