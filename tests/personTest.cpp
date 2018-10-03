#include "Student.hpp"
#include "Employee.hpp"
#include "Database.hpp"
#include <gtest/gtest.h>
#include <string>

struct testPerson : public ::testing::Test
{
    //GIVEN
    Person* st1 = new Student( "95050360680",
                               "Elizabeth",
                               "Garner",
                               "F",
                               "ul. Głogowska 142, 60-205 Poznań ",
                               566854);
    Person* st2 = new Student( "98062737303",
                               "Ruta",
                               "Sawicka",
                               "F",
                               "ul. Brzozowa 103, 35-113 Rzeszów  ",
                               128534);
    Person* em1 = new Employee("52102885074",
                              "Karl",
                              "A. Lucero",
                              "M",
                              "ul. Gościnna 62, 15-157 Białystok",
                              8652);
    Person* em2 = new Employee("59061369643",
                              "Agnieszka",
                              "Maciejewska",
                              "F",
                              "ul. Składowa 93, 30-016 Kraków",
                              2502);   

};

TEST_F(testPerson, add_new_student_by_constructor)
{
    ASSERT_EQ("95050360680", st1->getPesel());
    ASSERT_EQ("Elizabeth", st1->getFirstName());
    ASSERT_EQ("Garner", st1->getLastName());
    ASSERT_EQ("F", st1->getSex());
    ASSERT_EQ("ul. Głogowska 142, 60-205 Poznań ", st1->getAddress());
    ASSERT_EQ(566854, st1->getIndex());
}

TEST_F(testPerson, add_new_employee_by_constructor)
{
    ASSERT_EQ("52102885074", em1->getPesel());
    ASSERT_EQ("Karl", em1->getFirstName());
    ASSERT_EQ("A. Lucero", em1->getLastName());
    ASSERT_EQ("M", em1->getSex());
    ASSERT_EQ("ul. Gościnna 62, 15-157 Białystok", em1->getAddress());
    ASSERT_EQ(8652, em1->getSalary());
}

TEST_F(testPerson, modify_Salary_By_Pesel)
{
    //WHEN
    Database db;
    db.addToDatabase(st1);
    db.addToDatabase(st2);
    db.addToDatabase(em1);
    db.addToDatabase(em2);
    db.modifySalaryByPesel(2250, "59061369643");
    //THEN
    ASSERT_EQ(em2->getSalary(), 2250);
}

TEST_F(testPerson, clear_database)
{
    //WHEN
    Database db;
    db.addToDatabase(st1);
    db.addToDatabase(st2);
    db.addToDatabase(em1);
    db.addToDatabase(em2);
    ASSERT_EQ(db.getSize(), 4);
    //THEN
    db.clearDatabase();
    ASSERT_EQ(db.getSize(), 0);
}
