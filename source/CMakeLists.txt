set(TARGET_NAME StudentDatabase)

add_library(${TARGET_NAME}
    Database.cpp
    Database.hpp
    Employee.cpp
    Employee.hpp
    Person.cpp
    Person.hpp
    Student.cpp
    Student.hpp)
