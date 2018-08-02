#include "Database.hpp"
inline void separator(){std::cout << "\n\n\n\n";}
int main()
{

    Database Database;

    Student student1("97090383731", "Jan", "Tyski", 'M', "Czekoladowa 30/5 50-320 Wroclaw", 137002);
    Student student2("97071315296", "Piotr", "Strong", 'M', "Brzoskwiniowa 91 50-319 Wroclaw", 136402);
    Student student3("97011049766", "Kasia", "Perla", 'F', "Paprociowa 50/4 50-340 Wroclaw", 187002);

    Database.addToDatabase(student1);
    Database.addToDatabase(student2);
    Database.addToDatabase(student3);

    Employee worker1("75111004333", "Jerzy", "Jastrzab", 'M', "Pistacjowa 33 50-355 Wroclaw", 1790);
    Employee worker2("72101594678", "Jaroslaw", "Motyl", 'M', "Spokojna 42/8 50-360 Wroclaw", 1850);
    Employee worker3("72011018206", "Roza", "Kokon", 'F', "Jarzebinowa 38/5 50-330 Wroclaw", 1921);

    Database.addToDatabase(worker1);
    Database.addToDatabase(worker2);
    Database.addToDatabase(worker3);

    Database.showDatabase();
    Database.sortByPesel();
    separator();
    Database.showDatabase();
    separator();
    Database.sortByLastName();
    Database.showDatabase();
/*
    Database.sortDatabase();
    Database.showDatabase();

    Database.removeStudent(student3.getIndex());
    Database.showDatabase();

    Database.addToExternalFile();
    Database.loadFromExternalFile();
*/
    return 0;
}
