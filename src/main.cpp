#include "Database.hpp"
#include "Student.hpp"
#include "Employee.hpp"

int main()
{
    Database db;

    db.loadFromExternalFile();

    Person* em1 = new Employee("52102885074",
                              "Karl",
                              "A. Lucero",
                              "M",
                              "ul. Gościnna 62, 15-157 Białystok",
                              8652);
    Person* st1 = new Student( "95050360680",
                               "Elizabeth",
                               "Garner",
                               "F",
                               "ul. Głogowska 142, 60-205 Poznań ",
                               566854);
    Person* em2 = new Employee("70071525142",
                                  "Zofia",
                                  "Kozłowska",
                                  "F",
                                  "ul. 1 Maja 112, 19-335 Prostki ",
                                  3200);
    
    db.addToDatabase(em1);
    db.addToDatabase(st1);
    db.addToDatabase(em2);
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

    delete st1;
    delete em1;
    delete em2;

    return 0;
}
