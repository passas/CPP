#include <iostream>
#include <fstream>

//using namespace std

main ()
{
	std::ifstream ficheiro;
	
	ficheiro.open ("ficheiro.txt");
	if (ficheiro.is_open())
	{
		std::string linha;
		while ( getline(ficheiro, linha) )
		{
			std::cout << linha << std::endl;
		}
		ficheiro.close();
	}
}
