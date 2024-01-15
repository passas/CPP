#include <fstream>

//using namespace std

main ()
{
	std::ofstream ficheiro;
	
	ficheiro.open ("ficheiro.txt", std::ios::app);
	if (ficheiro.is_open())
	{
		ficheiro << "Tudo bem?" << std::endl;
		ficheiro.close();
	}
}
