#pragma once
#include <string>
#include <iostream>

class Address
{
    private:
        std::string city_;
        std::string zipCode_;
        std::string street_;
        int streetNumber_;
        int apartmentNumber_;
    public:
        Address(std::string city,std::string zipCode, std::string street, int streetNumber, int apartmentNumber);          
        ~Address();
        void getAddress() const;
};
