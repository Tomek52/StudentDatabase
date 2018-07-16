#include "Student.hpp"

Student::Student() {}

Student::Student(int index_,
                std::string firstName_,
                std::string lastName_)
		: index(index_)
		, firstName(firstName_)
	 	, lastName(lastName_)
{}

Student::~Student() {}

int Student::getIndex() const
{
    return this->index;
}
