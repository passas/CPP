#include <fstream>

//using namespace std

main ()
{
	std::ofstream ficheiro;
	
	ficheiro.open ("ficheiro.txt");
	if (ficheiro.is_open())
	{
		ficheiro << "Olá mundo..." << std::endl;
		ficheiro.close();
	}
}
