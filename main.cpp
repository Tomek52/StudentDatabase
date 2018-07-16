#include "Database.hpp"

int main()
{
    dataBase dataBase;
    int state=0;
    while(state<7)
    {
        switch (state)
        {
            case 0: 
                {
	 	dataBase.menu();
		std::cin >> state;
		std::cout << std::endl;
                break;
                }
            case 1:
                {
		std::cout << std::endl;
		dataBase.addToDatabase();
		state = 0;
		std::cout << std::endl;
                break;
                }
            case 2:
                {
		std::cout << std::endl;
		dataBase.showDatabase();
		state = 0;
		std::cout << std::endl;
                break;
                }
            case 3:
                {
		std::cout << std::endl;
		int studentIndexToRemove;
		std::cout << "Write index: ------\b\b\b\b\b\b";
		std::cin >> studentIndexToRemove;
		dataBase.removeStudent(studentIndexToRemove);
		state = 0;
		std::cout << std::endl;
                break;
                }
            case 4:
                {
		std::cout << std::endl;
		dataBase.sortDatabase();
		state = 0;
		std::cout << std::endl;
                break; 
                }
	    case 5:
		{
		dataBase.addToExternalFile();
		state = 0;
		std::cout << std::endl;
		break;
		}
	    case 6:
		{
		dataBase.loadFromExternalFile();
		state = 0;
		std::cout << std::endl;
		break;
		}
        }
    }
    return 0;
}
