#include "Address.hpp"


Address::Address(std::string city,std::string zipCode, std::string::street, int streetNumber, int apartmentNumber)
    : city_(city)
    , zipCode_(zipCode)
    , street_(street)
    , streetNumber_(streetNumber)
    , apartmentNumber_(apartmentNumber)
{}

Address::Address(std::string city,std::string zipCode, std::string::street, int streetNumber);
    : city_(city)
    , zipCode_(zipCode)
    , street_(street)
    , streetNumber_(streetNumber)
{}

Address::~Address() {}
