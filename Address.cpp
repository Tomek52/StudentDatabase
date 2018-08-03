#include "Address.hpp"


Address::Address(std::string city,std::string zipCode, std::string street, int streetNumber, int apartmentNumber = 0)
    : city_(city)
    , zipCode_(zipCode)
    , street_(street)
    , streetNumber_(streetNumber)
    , apartmentNumber_(apartmentNumber)
{}

Address::~Address() {}

void Address::getAddress() const
{
    std::cout<<"City: "<<city_<<std::endl;
    std::cout<<"Zip code: "<<zipCode_<<std::endl;
    std::cout<<"Street: "<<street_<<" "<<streetNumber_<<"/"<<apartmentNumber_<<std::endl;
}
