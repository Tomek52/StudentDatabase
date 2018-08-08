#include "Database.hpp"
std::vector<Person*> data;

void Database::addToDatabase(Person* s)
{
    data.push_back(s);
}

void Database::showDatabase()
{
    for(const auto &person: data)
    {
        person->showPerson();
    }
}

void Database::removeStudentByIndex(const unsigned int& index)
{
    for (auto i = data.begin(); i != data.end(); i++)
    {
        if ((*i)->getIndex() == index)
        {
            data.erase(i);
            std::cout << "Status: student removed by index successful" << std::endl;
            break;
        }
    }
}
 void Database::removePersonByPesel(std::string pesel)
 {
     for (auto i = data.begin(); i != data.end(); i++)
     {
         if ((*i)->getPesel() == pesel)
         {
             data.erase(i);
             std::cout << "Status: person removed by pesel successful" << std::endl;
             break;
         }
     }
 }
void Database::modifySalaryByPesel(unsigned int salary, std::string pesel)
{
    for (auto i = data.begin(); i != data.end(); i++)
    {
        if ((*i)->getPesel() == pesel)
        {
            (*i)->setSalary(salary);
            std::cout << "Status: modify salary successful" << std::endl;
            break;
        }
    }
}
void Database::showByLastName(std::string lastname)
{
    for (auto i = data.begin(); i != data.end(); i++)
    {
        if ((*i)->getLastName() == lastname)
        {
            std::cout << "Searching by last name complete. Your result:" << std::endl;
            (*i)->showPerson();
        }
    }
}
void Database::showByPesel(std::string pesel)
{
    for (auto i = data.begin(); i != data.end(); i++)
    {
        if ((*i)->getPesel() == pesel)
        {
            std::cout << "Searching by pesel complete. Your result:" << std::endl;
             (*i)->showPerson();
        }
    }
}
void Database::sortByIndex()
{
    std::sort(data.begin(), data.end(), [](Person* one, Person* two) {return one->getIndex() < two->getIndex(); });
    std::cout << "Status: sorting by index completed" << std::endl;
}

void Database::sortByLastName()
{
    std::sort(data.begin(), data.end(), [](Person* one, Person* two) {return one->getLastName() < two->getLastName(); });
    std::cout << "Status: sorting by last name completed" << std::endl;
}

void Database::sortBySalary()
{
    std::sort(data.begin(), data.end(), [](Person* one, Person* two) {return one->getSalary() < two->getSalary(); });
    std::cout << "Status: sorting by salary completed" << std::endl;
}

void Database::addToExternalFile()
try
{
    if (data.size())
    {
        std::ofstream outFile("StudentsDatabase.txt", std::ios_base::out | std::ios_base::ate | std::ios_base::app);
        for (auto i = data.begin(); i != data.end(); i++)
        {
            outFile << (*i)->getIndex() << std::endl;
            outFile << (*i)->getFirstName() << std::endl;
            outFile << (*i)->getLastName() << std::endl;
            outFile << (*i)->getSalary() << std::endl;
            outFile << (*i)->getPesel() << std::endl;
            outFile << (*i)->getAddress() << std::endl;
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
void Database::loadFromExternalFileShowSwitch(unsigned short int &counter)
{
switch(counter)
            {
             case 0: std::cout << "Index: "; break;
             case 1: std::cout << "First Name: "; break;
             case 2: std::cout << "Last Name: "; break;
             case 3: std::cout << "Salary: "; break;
             case 4: std::cout << "Pesel: "; break;
             case 5: std::cout << "Address: "; break;
             default:
                     {
                             std::cout << "------" << std::endl;
                             std::cout << "Index: ";
                             counter = 0;
                             break;
                     }
            }                             
            
}
void Database::loadFromExternalFile()
try
{
    std::string textFromFile;
    std::ifstream inFile("StudentsDatabase.txt");
    if (inFile.is_open())
    {
        std::cout << "Student loaded from external file: " << std::endl << std::endl;
        while (!inFile.eof())
        {
            static unsigned short int counter = 0;
            loadFromExternalFileShowSwitch(counter);
            counter++;
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
