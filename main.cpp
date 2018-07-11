#include "dataBase.h"

int main()
{
    int state=0;
    while(state<4)
    {
        switch (state)
        {
            case 0: 
                {
                    std::cout<<std::endl;
                    std::cout<<"To add student, press 1"<<std::endl;
                    std::cout<<"To show database, press 2"<<std::endl;
                    std::cout<<"To remove student, press 3"<<std::endl;
                    std::cout<<"To exit program, press other number"<<std::endl;
                    std::cin>>state;
                    std::cout<<std::endl;
                    break;
                }
            case 1:
                {
                    std::cout<<std::endl;
                    dataBase::addToDatabase();
                    state=0;
                    std::cout<<std::endl;
                    break;
                }
            case 2:
                {
                    std::cout<<std::endl;
                    dataBase::showDatabase();
                    state=0;
                    std::cout<<std::endl;
                    break;
                }
            case 3:
                {
                    std::cout<<std::endl;
                    int studentIndexToRemove;
                    std::cout<<"Write index"<<std::endl;
                    std::cin>>studentIndexToRemove;
                    dataBase::findStudent(studentIndexToRemove);
                    state=0;
                    std::cout<<std::endl;
                    break;
                }
        }
    }
	return 0;
}
