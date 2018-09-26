#include "Database.hpp"
#include "Student.hpp"
#include "Employee.hpp"

int main()
{
    Database db;

    Person* jan = new Student("Jan",
                              "Kowalski",
                              "90031112275",
                              "M",
                              "ul. Wroblewskiego 12, 51-627 Wroclaw",
                              123456);
    Person* ala = new Employee("Ala",
                               "Kowalska",
                               "70031112275",
                               "F",
                               "plac Wroblewskiego 13, 50-626 Wroclaw",
                               5000);
    Person* mietek = new Employee("Mietek",
                                  "Kowalski",
                                  "80031112275",
                                  "M",
                                  "ul. Wroblewskiego 13, 51-627 Wroclaw",
                                  5500);
    
    db.addToDatabase(jan);
    db.addToDatabase(ala);
    db.addToDatabase(mietek);
    db.showDatabase("Example Added");

    return 0;
}
