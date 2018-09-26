#include "Database.hpp"


void Database::addToDatabase(Person* s)
{
    data.push_back(s);
}

Person* Database::findByPesel(const string & pesel)
{
    for (auto & i : data)
    {
        if (i->getPesel() == pesel)
        {
            return i;
        }
    }
}

void Database::removeStudentByIndex(const unsigned int& index)
{
    vector<Person*>::iterator iter = data.begin();
    while (iter != data.end())
    {
        if ((*iter)->getIndex() == index)
        {
            data.erase(iter);
            return;
        }
        iter++;
    }
}

 void Database::removePersonByPesel(string pesel)
 {
    vector<Person*>::iterator iter = data.begin();
    while (iter != data.end())
    {
        if ((*iter)->getPesel() == pesel)
        {
            data.erase(iter);
            return;
        }
        iter++;
    }
 }

void Database::sortByIndex()
{
    sort(data.begin(), data.end(), [](Person* one, Person* two) {return one->getIndex() < two->getIndex(); });
}

void Database::sortByLastName()
{
    sort(data.begin(), data.end(), [](Person* one, Person* two) {return one->getLastName() < two->getLastName(); });
}

void Database::sortBySalary()
{
    sort(data.begin(), data.end(), [](Person* one, Person* two) {return one->getSalary() < two->getSalary(); });
}

void Database::addToExternalFile()
{
    ofstream output("../textFiles/StudentDatabase.txt");
    for (const auto& person : data)
    {
        output << person->toString(':');
    }
}
            
void Database::loadFromExternalFile()
{
    ifstream input("../textFiles/StudentDatabase.txt");
    string line;
    while(getline(input, line))
    {
        if (line.find("Student:") != string::npos)
        {
            Person* person = new Student(line);
            addToDatabase(person);
        }
        else if (line.find("Employee:") != string::npos)
        {
            Person* person = new Employee(line);
            addToDatabase(person);     
        }
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

void Database::showDatabase(string message)
{
    cout << "___DATABASE___" << message << "___" << endl;
    for(const auto &person: data)
    {
        person->showPerson();
        cout << endl;
    }
}
