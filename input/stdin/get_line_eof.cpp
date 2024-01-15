#include <iostream>
#include <fstream>

//using namespace std

main ()
{
	std::string linha;
	
	while (getline(std::cin, linha))
	{
		std::cout << linha << std::endl;
	}

}
