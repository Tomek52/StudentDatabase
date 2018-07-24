#include "Person.hpp"

bool Person::verifyPesel(int pesel)
{
    if(pesel.size()!=11) return false;
    
    const std::array<int,10> numToCheckPesel = {9,7,3,1,9,7,3,1,9,7};
    int checkSum;

    for(int i=0; i<10; i++)
    {
        try
        {
            int digit = std::stoi(pesel[i],nullptr);
            checkSum+=digit*numToCheckPesel[i];
        }
        catch(const std::invalid_argument& e)
        {
            std::cout<<"Invalid argument: "<<e.what()<<std::endl;
        }
        catch(...)
        {
            std::cout<<"Unknown error"<<std::endl;
        }
    }

    if(checkSum%10==pesel[10]) return true;
    else return false;
}

