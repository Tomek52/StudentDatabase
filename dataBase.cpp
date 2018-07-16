#include "dataBase.h"
#include "Student.hpp"

std::vector<Student> data;

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

void dataBase::removeStudent(const int& index)
{
    for (auto i = data.begin(); i != data.end(); i++)
    {
        if (i->getIndex() == index)
	{
	    data.erase(i);
	    std::cout << "Status: student removed successful" << std::endl;
	    break;
	}
    }
}

void dataBase::sortDatabase()
{
    std::sort(data.begin(), data.end(), [](Student& one, Student& two){return one.getIndex() < two.getIndex();});
    std::cout << "Status: sorting completed" << std::endl;
}

void dataBase::menu()
{
    std::cout << std::endl;
    std::cout << "~~~~Student's database~~~~" << std::endl;
    std::cout << "#To add student, press 1" << std::endl;
    std::cout << "#To show database, press 2" << std::endl;
    std::cout << "#To remove student, press 3" << std::endl;
    std::cout << "#To sort database by index, press 4" << std::endl;
    std::cout << "#To save studenst in the external file, press 5" << std::endl;
    std::cout << "#To load students from file, press 6" << std::endl;
    std::cout << "#To exit program, press other number" << std::endl;
    std::cout << "Option: ";
}

void dataBase::addToExternalFile()
{
    std::ofstream outFile("StudentsDatabase.txt", std::ios_base::out | std::ios_base::ate | std::ios_base::app);
    for (auto i = data.begin(); i != data.end(); i++)
    {
        outFile << i->getIndex() << std::endl;
        outFile << i->getFirstName() << std::endl;
        outFile << i->getLastName() << std::endl;
    }
    outFile.close();
    std::cout << "Status: load complete" << std::endl;
}

void dataBase::loadFromExternalFile()
{
    std::string textFromFile;
    std::ifstream inFile("StudentsDatabase.txt");
    std::cout << "Studenst loaded from external file: " << std::endl << std::endl;
    if (inFile.is_open())
    {
        while (!inFile.eof())
	    {
	        getline(inFile, textFromFile);
	        std::cout << textFromFile << std::endl;
	    }
    }
    else
    {
        std::cout << "Error: cannot open the file" << std::endl;
    }
}
