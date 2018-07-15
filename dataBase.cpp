#include "dataBase.h"

std::vector<Student> data;

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

std::ostream& operator<<(std::ostream& os, const Student& s)
{
    os << "Index: " << s.index << std::endl;
    os << "First name: " << s.firstName << std::endl;
    os << "Last name: " << s.lastName << std::endl;
    return os;
}

std::istream& operator>>(std::istream& is, Student& s)
{
    double checkIndex;
    bool correctIndex = false;
    std::cout << "Input  student's data" << std::endl;
    do
    {
        std::cout << "Input index: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> s.index;
	if (!std::cin)
	{
	    std::cout << std::endl;
	    std::cout << "Index can contains only numbers !" << std::endl;
	    correctIndex = false;
	}
	else
	{
	    checkIndex = s.index / 100000;
	    if (checkIndex < 1.0 || checkIndex > 9.9)
	    {
            std::cout << "Incorrect index. Your index must contains 6 numbers !" << std::endl; //standard pwr index
            std::cout << "First number cannot be 0 !" << std::endl;
            correctIndex = false;
	    }
	    else
	    {
	        correctIndex = true;
	    }
	}
	} while (correctIndex == false);

	std::cout << "Input First name: ";
	std::cin >> s.firstName;
	std::cout << "Input Last name: ";
	std::cin >> s.lastName;
	return is;
}

void Student::showStudent() const
{
    std::cout << "Index: " << this->index << std::endl;
    std::cout << "First name: " << this->firstName << std::endl;
    std::cout << "Last name: " << this->lastName << std::endl;
}

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
        outFile << i->index << std::endl;
        outFile << i->firstName << std::endl;
        outFile << i->lastName << std::endl;
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
