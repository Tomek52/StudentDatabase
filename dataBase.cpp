#include "dataBase.h"

std::vector<Student> data;

Student::Student(int index_,
                 std::string firstName_,
                 std::string lastName_)
	: index(index_)
    , firstName(firstName_)
    , lastName(lastName_)
{
    std::cout<<"added student to database"<<std::endl;
}

Student::~Student() {}

std::ostream & operator<<(std::ostream & os, const Student& s)
{
	os << "Index: " << s.index << std::endl;
	os << "First name: " << s.firstName << std::endl;
	os << "Last name: " << s.lastName << std::endl;
	return os;
}

std::istream & operator >> (std::istream & is, Student& s)
{
	double checkIndex;
	std::cout << "Input  student's data" << std::endl;
	do
	{
		std::cout << "Input index: ";
		std::cin >> s.index;
		checkIndex = s.index / 100000;
		if (checkIndex < 1.0 || checkIndex > 9.9)
		{
			std::cout << "Incorrect index. Your index must contains 6 numbers !" << std::endl; //standard pwr index
			std::cout << "First number cannot be 0 !" << std::endl;
		}
	} while (checkIndex < 1.0 || checkIndex > 9.9);

	std::cout << "Input First name: ";
	std::cin >> s.firstName;
	std::cout << "Input Last name: ";
	std::cin >> s.lastName;
	return is;
}

void Student::showStudent() 
{
	std::cout << "Index: " << this->index << std::endl;
	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
}

void dataBase::addToDatabase()
{
	Student temporaryStudent;
	std::cin >> temporaryStudent;
	data.push_back(temporaryStudent);
}

void dataBase::showDatabase()
{
	for (auto i = data.begin(); i != data.end(); i++)
	{
		i->showStudent();
	}
}



