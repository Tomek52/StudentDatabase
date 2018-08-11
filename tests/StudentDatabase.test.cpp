#include "../catch.hpp"
#include "../source/Person.hpp"
#include "../source/Database.hpp"

SCENARIO("veryfing pesel")
{
    GIVEN("correct pesel of person")
    {
        std::string pesel = "44051401359";
        Person* p = new Student(pesel,"a","b","m","asd",123456);

        WHEN("pesel is correct")
        {
            THEN("verifyPesel return true")
            {
                REQUIRE(p->verifyPesel(p->getPesel())==true);
                delete p;
            }
        }
    }
}
