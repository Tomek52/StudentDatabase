#include "Database.hpp"

int main()
{

    Database Database;
    Address stadres1("wroclaw","50-320", "Czekoladowa", 30, 5);
    Address stadres2("wroclaw","50-320", "Brzoskwinowa", 91);
    Address stadres3("wroclaw","50-320", "Paprociowa", 50, 4);
    Student student1("97090383731", "Jan", "Tyski", 'M', stadres1, 137002);
    Student student2("97071315296", "Piotr", "Strong", 'M', stadres2, 136402);
    Student student3("97011049766", "Kasia", "Perla", 'K', stadres3, 187002);

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
