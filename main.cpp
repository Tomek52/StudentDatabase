#include "Database.hpp"

int main()
{
    dataBase dataBase;
    Student student1(730671, "Jan", "Tyski");
    Student student2(123456, "Piotr", "Strong");
    Student student3(931178, "Kasia", "Perla");

    dataBase.addToDatabase(student1);
    dataBase.addToDatabase(student2);
    dataBase.addToDatabase(student3);

    dataBase.showDatabase();

    dataBase.sortDatabase();
    std::cout << std::endl;
    dataBase.showDatabase();

    dataBase.removeStudent(student3.getIndex());
    std::cout << std::endl;
    dataBase.showDatabase();

    dataBase.addToExternalFile();
    std::cout << std::endl;
    dataBase.loadFromExternalFile();

    return 0;
}
