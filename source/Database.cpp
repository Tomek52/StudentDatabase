#include "Database.hpp"
#include <array>
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
            outFile << (*i)->getPesel() << std::endl;
            outFile << (*i)->getFirstName() << std::endl;
            outFile << (*i)->getLastName() << std::endl;
            outFile << (*i)->getSex() <<std::endl;
            outFile << (*i)->getAddress() << std::endl;
            outFile << (*i)->getIndex() << std::endl;
            outFile << (*i)->getSalary() << std::endl;
        }
        outFile.close();
        std::cout << "Status: added to file complete" << std::endl;
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
    std::string oneLine;
    std::array<std::string,7> loadedPerson;
    std::ifstream inFile("StudentsDatabase.txt");
    if (inFile.is_open())
    {
        while(!inFile.eof())
        {
            for(int i=0; i<7;i++)
            {
                getline(inFile, oneLine);
                loadedPerson[i]=oneLine;
            }
            if(std::stoi(loadedPerson[6])==0)
            {
                Person* student = new Student(loadedPerson[0],loadedPerson[1],loadedPerson[2],loadedPerson[3],loadedPerson[4], std::stoi(loadedPerson[5]));
                addToDatabase(student);
            }
            else
            {
                Person* employee = new Employee(loadedPerson[0],loadedPerson[1],loadedPerson[2],loadedPerson[3],loadedPerson[4], std::stoi(loadedPerson[6]));
                addToDatabase(employee);
            }
            oneLine.clear();
        }
    }
    else
        std::cout << "There is no StudentsDatabase.txt file to open" << std::endl << std::endl;
}
catch (...)
{
    std::cout << "Error: Loaded students from external file failed" << std::endl;
}

void Database::modifyAddressByPesel(std::string address, std::string pesel)
{
    for (auto i = data.begin(); i != data.end(); i++)
    {
        if((*i)->getPesel() == pesel)
        {
            (*i)->setAddress(address);
            std::cout << "Status: modify address successful" << std::endl;
        }
    }
}
