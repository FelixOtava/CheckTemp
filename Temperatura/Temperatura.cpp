#include "CheckTemperatures.h"

int main()
{
	std::vector<int> inputTemp = {};
	std::cout << "How many temperatures you want to introduce ?\n";
	int numOfTemps;
	int temp;
	std::cin >> numOfTemps;
	
	for (int i= 0; i<numOfTemps; i++)
	{
		std::cout << "Enter the temperature: \n";
		std::cin >> temp;
		
		inputTemp.push_back(temp);
	}
	std::cout << CheckTemps(inputTemp);
	
}