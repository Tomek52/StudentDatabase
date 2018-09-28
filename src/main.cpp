#include "Database.hpp"
#include "Student.hpp"
#include "Employee.hpp"

int main()
{
    Database db;

    db.loadFromExternalFile();

    Person* jan = new Employee("Karl",
                              "A. Lucero",
                              "52102885074",
                              "M",
                              "ul. Gościnna 62, 15-157 Białystok",
                              8652);
    Person* ala = new Student("Elizabeth",
                               "Garner",
                               "95050360680",
                               "F",
                               "ul. Głogowska 142, 60-205 Poznań ",
                               566854);
    Person* mietek = new Employee("Zofia",
                                  "Kozłowska",
                                  "70071525142",
                                  "F",
                                  "ul. 1 Maja 112, 19-335 Prostki ",
                                  3200);
    
    db.addToDatabase(jan);
    db.addToDatabase(ala);
    db.addToDatabase(mietek);
    db.showDatabase("Example Added");

    db.sortByIndex(); 
    db.showDatabase(" Sorted data by Index ");

    db.sortByLastName();
    db.showDatabase(" Sorted data by Last Name ");

    db.sortBySalary();
    db.showDatabase(" Sorted by salary ");

    db.modifySalaryByPesel(7200, "80031112275");
    db.modifyAddressByPesel(" Wieczorowa 22B/5, Warszawa", "80031112275");
    db.showDatabase(" Modified Salary and Address ");

    cout << "Show by last name: ";
    db.showByLastName("A. Lucero");
    cout << "Show By pesel: ";
    db.showByPesel("70071525142");

    db.clearDatabase();
    db.showDatabase(" Clear DataBase ");

    db.addToExternalFile();
    cout << " Added to database " << endl;

    delete jan;
    delete ala;
    delete mietek;

    return 0;
}
