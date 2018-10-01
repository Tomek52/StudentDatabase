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

