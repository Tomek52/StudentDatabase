#pragma once
#include <iostream>
#include<string>
#include <vector>
#include <algorithm>


class Student
{
private:
	int index;
	std::string firstName;
	std::string lastName;
public:
	Student(int index_ = 123456, std::string firstName_= "Jan", std::string lastName_ = "Kowalski");
	~Student();
	friend std::ostream& operator<<(std::ostream& os, const Student& s);
	friend std::istream& operator>>(std::istream& is, Student& s);
	void showStudent();
};

namespace dataBase
{
	void addToDatabase();
	void showDatabase();
}
