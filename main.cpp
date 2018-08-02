#include "Database.hpp"
#include "Employee.hpp"
#include "Person.hpp"
#include "Student.hpp"
int main()
{
    Database Database;
    Person* a = new Employee("98647278919", "Andrzej", "Kmicic", 'm', new Address("Warszawa", "23-000", "Poznanska", 5,23), 10000);
    
    Person* b = new Employee("12345678999", "Robert", "Lewandowski", 'm', new Address("Warszawa", "23-000", "Poznanska", 5,23), 40000);
    Person* c = new Employee("78647278919", "Anna", "Kos", 'f', new Address("Warszawa", "23-000", "Poznanska", 5,23), 2000);
    Person* d = new Employee("38647278919", "Magdalena", "Kowalska", 'f', new Address("Warszawa", "23-000", "Poznanska", 5,23), 13000);
    Person* e = new Employee("18647278919", "Mariusz", "Maly", 'm', new Address("Warszawa", "23-000", "Poznanska", 5,23), 13500);
    Database.addToDatabase(a);
    Database.addToDatabase(b);
    Database.addToDatabase(c);
    Database.addToDatabase(d);
    Database.addToDatabase(e);

    Database.showDatabase();
    Database.sortBySalary();
    Database.showDatabase();

    
    return 0;
}
