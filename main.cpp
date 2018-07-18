#include "Database.hpp"

int main()
{
    Database Database;
    Student student1(730671, "Jan", "Tyski");
    Student student2(123456, "Piotr", "Strong");
    Student student3(931178, "Kasia", "Perla");

    Database.addToDatabase(student1);
    Database.addToDatabase(student2);
    Database.addToDatabase(student3);

    Database.showDatabase();

    Database.sortDatabase();
    std::cout << std::endl;
    Database.showDatabase();

    Database.removeStudent(student3.getIndex());
    std::cout << std::endl;
    Database.showDatabase();

    Database.addToExternalFile();
    std::cout << std::endl;
    Database.loadFromExternalFile();

    return 0;
}
