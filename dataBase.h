#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>


class Student
{
private:
	int index;
	std::string firstName;
	std::string lastName;
public:
	Student(int index_ = 123456, std::string firstName_= "Jan", std::string lastName_ = "Kowalski");
	~Student();

    int getIndex()
    {
        return index;
    }

	friend std::ostream& operator<<(std::ostream& os, const Student& s);
	friend std::istream& operator>>(std::istream& is, Student& s);
	friend void addToExternalFile();
	void showStudent();
};

namespace dataBase
{
	void addToDatabase();
	void showDatabase();
    void removeStudent(const int&);
    void sortDatabase();
	void menu();
	void loadFromExternalFile();
}
