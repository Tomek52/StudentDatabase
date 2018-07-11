#include "dataBase.h"

int main()
{
    int state=0;
    while(1)
    {
        switch (state)
        {
            case 0: 
                {
                    std::cout<<"To add student, press 1"<<std::endl;
                    std::cin>>state;
                    break;
                }
            case 1:
                {
                    dataBase::addToDatabase();
                    state=0;
                    break;
                }
            case 2:
                {
                    dataBase::showDatabase();
                    state=0;
                }
        }
    }
	return 0;
}
