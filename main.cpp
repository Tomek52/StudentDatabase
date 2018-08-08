#include "Database.hpp"
#include "Employee.hpp"
#include "Person.hpp"
#include "Student.hpp"
int main()
{
    Database Database;
    Person* a = new Employee("98647278919", "Andrzej", "Kmicic", 'm', "Warszawa 23-000 Poznanska 5/23", 10000);
    Person* b = new Employee("12345678999", "Robert", "Lewandowski", 'm', "Warszawa 23-000 Poznanska 5/23", 40000);
    Person* c = new Employee("78647278919", "Anna", "Kos", 'f', "Warszawa 23-000 Poznanska 5/23", 2000);
    Person* d = new Employee("38647278919", "Magdalena", "Kowalska", 'f', "Warszawa 23-000 Poznanska 5/23", 13000);
    Person* e = new Employee("18647278919", "Mariusz", "Maly", 'm', "Warszawa 23-000 Poznanska 5/23", 13500);
    Database.addToDatabase(a);
    Database.addToDatabase(b);
    Database.addToDatabase(c);
    Database.addToDatabase(d);
    Database.addToDatabase(e);

    Person* sa = new Student("94081097437", "Janusz", "Kmicic", 'm', "Warszawa 13-700 Poznanska 5/3", 147738);
    Person* sb = new Student("94101060139", "Tomek", "Kurtyka", 'm', "Warszawa 21-500 Wroclawska 60/23", 180038);
    Person* sc = new Student("94110615614", "Zenon", "Kopacz", 'm', "Warszawa 22-400 Legnicka 30/2", 817738);
    Person* sd = new Student("94081072764", "Marika", "Szklanka", 'm', "Warszawa 33-050 Krakowska 7/0", 157738);

    Database.addToDatabase(sa);
    Database.addToDatabase(sb);
    Database.addToDatabase(sc);
    Database.addToDatabase(sd);

    Database.showDatabase();
    std::cout << "\n\n";

    Database.modifySalaryByPesel(1234, a->getPesel());
    Database.removeStudentByIndex(sc->getIndex());
    Database.removePersonByPesel(e->getPesel());
    Database.sortBySalary();
    std::cout << "\n\n";

    Database.showDatabase();
    std::cout << "\n\n";

    Database.showByLastName(sa->getLastName());
    Database.showByPesel(d->getPesel());

    std::cout << "\n\n";
    Database.addToExternalFile();
    std::cout << "\n\n";
    Database.loadFromExternalFile();
    
    return 0;
}
