#include <Student.hpp>
#include <Employee.hpp>
#include <gtest/gtest.h>
#include <string>

struct testPerson : public ::testing::Test
{
    Person* st1 = new Student( "95050360680",
                               "Elizabeth",
                               "Garner",
                               "F",
                               "ul. Głogowska 142, 60-205 Poznań ",
                               566854);
    Person* em1 = new Employee("52102885074",
                              "Karl",
                              "A. Lucero",
                              "M",
                              "ul. Gościnna 62, 15-157 Białystok",
                              8652);
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
