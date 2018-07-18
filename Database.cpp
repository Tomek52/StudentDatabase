#include "Database.hpp"

std::vector<Student> data;

void Database::addToDatabase(Student& s)
{
    data.push_back(s);
}

void Database::showDatabase()
{
    for (auto i = data.begin(); i != data.end(); i++)
    {
        i->showStudent();
    }
}

void Database::removeStudent(const int& index)
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

void Database::sortDatabase()
{
    std::sort(data.begin(), data.end(), [](Student& one, Student& two) {return one.getIndex() < two.getIndex(); });
    std::cout << "Status: sorting completed" << std::endl;
}

void Database::addToExternalFile()
try
{
    if (data.size())
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
    else
    {
        std::cout << "There are no students in the database" << std::endl;
    }
}
catch (...)
{
    std::cout << "Error: Added student to external file failed" << std::endl;
}

void Database::loadFromExternalFile()
try
{
    std::string textFromFile;
    std::ifstream inFile("StudentsDatabase.txt");
    if (inFile.is_open())
    {
        std::cout << "Studenst loaded from external file: " << std::endl << std::endl;
        while (!inFile.eof())
        {
            getline(inFile, textFromFile);
            std::cout << textFromFile << std::endl;
        }
    }
    else
        std::cout << "There is no StudentsDatabase.txt file to open" << std::endl << std::endl;
}
catch (...)
{
    std::cout << "Error: Loaded students from external file failed" << std::endl;
}
