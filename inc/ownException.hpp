#include <exception>

class OpenFileError : public exception
{
public:
    char* what();
};
/*
struct NotFound : public std::out_of_range
{
    NotFound() : std::out_of_range(message)
};
*/
