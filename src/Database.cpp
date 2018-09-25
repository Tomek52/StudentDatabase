#include "Database.hpp"
#include <array>


void Database::addToDatabase(Person* s)
{
    data.push_back(s);
}

void Database::removeStudentByIndex(const unsigned int& index)
{
    for (auto i = data.begin(); i != data.end(); i++)
    {
        if ((*i)->getIndex() == index)
        {
            data.erase(i);
            cout << "Status: student removed by index successful" << endl;
            break;
        }
    }
}

 void Database::removePersonByPesel(string pesel)
 {
     for (auto i = data.begin(); i != data.end(); i++)
     {
         if ((*i)->getPesel() == pesel)
         {
             data.erase(i);
             cout << "Status: person removed by pesel successful" << endl;
             break;
         }
     }
 }

void Database::sortByIndex()
{
    sort(data.begin(), data.end(), [](Person* one, Person* two) {return one->getIndex() < two->getIndex(); });
    cout << "Status: sorting by index completed" << endl;
}

void Database::sortByLastName()
{
    sort(data.begin(), data.end(), [](Person* one, Person* two) {return one->getLastName() < two->getLastName(); });
    cout << "Status: sorting by last name completed" << endl;
}

void Database::sortBySalary()
{
    sort(data.begin(), data.end(), [](Person* one, Person* two) {return one->getSalary() < two->getSalary(); });
    cout << "Status: sorting by salary completed" << endl;
}

void Database::addToExternalFile()
try
{
    if (data.size())
    {
        ofstream outFile("StudentsDatabase.txt", ios_base::out | ios_base::ate | ios_base::app);
        for (auto i = data.begin(); i != data.end(); i++)
        {
            outFile << (*i)->getPesel() << endl;
            outFile << (*i)->getFirstName() << endl;
            outFile << (*i)->getLastName() << endl;
            outFile << (*i)->getSex() <<endl;
            outFile << (*i)->getAddress() << endl;
            outFile << (*i)->getIndex() << endl;
            outFile << (*i)->getSalary() << endl;
        }
        outFile.close();
        cout << "Status: added to file complete" << endl;
    }
    else
    {
        cout << "There are no students in the database" << endl;
    }
}
catch (...)
{
    cout << "Error: Added student to external file failed" << endl;
}
            
void Database::loadFromExternalFile()
{
try
{
    string oneLine;
    array<string,7> loadedPerson;
    ifstream inFile("StudentsDatabase.txt");
    if (inFile.is_open())
    {
        while(!inFile.eof())
        {
            for(int i=0; i<7;i++)
            {
                getline(inFile, oneLine);
                loadedPerson[i]=oneLine;
            }
            if(stoi(loadedPerson[6])==0)
            {
                Person* student = new Student(loadedPerson[0],loadedPerson[1],loadedPerson[2],loadedPerson[3],loadedPerson[4], stoi(loadedPerson[5]));
                addToDatabase(student);
            }
            else
            {
                Person* employee = new Employee(loadedPerson[0],loadedPerson[1],loadedPerson[2],loadedPerson[3],loadedPerson[4], stoi(loadedPerson[6]));
                addToDatabase(employee);
            }
            oneLine.clear();
        }
    }
    else
        cout << "There is no StudentsDatabase.txt file to open" << endl << endl;
}
catch (...)
{
    cout << "Error: Loaded students from external file failed" << endl;
}
}

void Database::modifySalaryByPesel(unsigned int salary, string pesel)
{
    for (auto i = data.begin(); i != data.end(); i++)
    {
        if ((*i)->getPesel() == pesel)
        {
            (*i)->setSalary(salary);
            cout << "Status: modify salary successful" << endl;
            break;
        }
    }
}

void Database::modifyAddressByPesel(string address, string pesel)
{
    for (auto i = data.begin(); i != data.end(); i++)
    {
        if((*i)->getPesel() == pesel)
        {
            (*i)->setAddress(address);
            cout << "Status: modify address successful" << endl;
        }
    }
}

void Database::showByLastName(string lastname)
{
    for (auto i = data.begin(); i != data.end(); i++)
    {
        if ((*i)->getLastName() == lastname)
        {
            cout << "Searching by last name complete. Your result:" << endl;
            (*i)->showPerson();
        }
    }
}

void Database::showByPesel(string pesel)
{
    for (auto i = data.begin(); i != data.end(); i++)
    {
        if ((*i)->getPesel() == pesel)
        {
            cout << "Searching by pesel complete. Your result:" << endl;
             (*i)->showPerson();
        }
    }
}

void Database::showDatabase()
{
    for(const auto &person: data)
    {
        person->showPerson();
    }
}
