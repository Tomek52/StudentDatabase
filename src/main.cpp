#include "Database.hpp"
#include "Student.hpp"
#include "Employee.hpp"
int main()
{
    Database.showDatabase();
    Database.sortDatabase();
    Database.sortByIndex();
    std::cout << std::endl;
    Database.showDatabase();
    Database.removeStudent(student3.getIndex());
    std::cout << std::endl;
    Database.removeStudentByIndex(sa->getIndex());
    std::cout << "\n\n";
    Database.modifySalaryByPesel(1234, a->getPesel());
    Database.modifyAddressByPesel("Wroclaw 50-221 Sloneczna 12/1", a->getPesel());
    Database.removeStudentByIndex(sc->getIndex());
    Database.removePersonByPesel(e->getPesel());
    Database.sortBySalary();
    std::cout << "\n\n";
    Database.showDatabase();
    std::cout << "\n\n";
    Database.showByLastName(sa->getLastName());
    Database.showByPesel(d->getPesel());
 
    Database.addToExternalFile();
    std::cout << std::endl;
    Database.loadFromExternalFile();
    std::cout << "\n\n";
    Database.addToExternalFile();
    std::cout << "\n\n";
    Database.loadFromExternalFile();
    
    return 0;
}