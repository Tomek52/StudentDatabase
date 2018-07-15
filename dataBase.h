#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

namespace dataBase
{
    void addToDatabase();
    void showDatabase();
    void removeStudent(const int&);
    void sortDatabase();
    void menu();
    void addToExternalFile();
    void loadFromExternalFile();
}

class Student
{
private:
        int index;
	std::string firstName;
	std::string lastName;
public:
	Student();
	Student(int index_, std::string firstName_, std::string lastName_ );
	~Student();
	int getIndex() const;
	friend std::ostream& operator<<(std::ostream& os, const Student& s);
	friend std::istream& operator>>(std::istream& is, Student& s);
	friend void dataBase::addToExternalFile();
	void showStudent() const;
};

