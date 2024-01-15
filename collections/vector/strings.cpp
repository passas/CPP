#include <iostream>
#include <vector>

//using namespace std;

main()
{
	std::vector<std::string> nomes;
	
	nomes.push_back("Sérgio");
	nomes.push_back("Miguel");
	nomes.push_back("Costa");

	for (auto elemento = nomes.begin(); elemento != nomes.end(); ++elemento)
		std::cout << *(elemento) << " ";
	std::cout << std::endl;

}
