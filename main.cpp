#include "Database.hpp"

int main()
{

    Database Database;

    Student student1("97090383731", "Jan", "Tyski", 'M', "Czekoladowa 30/5 50-320 Wroclaw", 137002);
    Student student2("97071315296", "Piotr", "Strong", 'M', "Brzoskwiniowa 91 50-319 Wroclaw", 136402);
    Student student3("97011049766", "Kasia", "Perla", 'K', "Paprociowa 50/4 50-340 Wroclaw", 187002);

    Database.addToDatabase(student1);
    Database.addToDatabase(student2);
    Database.addToDatabase(student3);

    Database.showDatabase();

    Database.sortDatabase();
    Database.showDatabase();

    Database.removeStudent(student3.getIndex());
    Database.showDatabase();

    Database.addToExternalFile();
    Database.loadFromExternalFile();

    return 0;
}
