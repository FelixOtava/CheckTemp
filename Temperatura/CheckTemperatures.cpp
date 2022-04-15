#include "CheckTemperatures.h"

int CheckTemps(std::vector<int> temps)
{
	int closestTemp = temps[0];
	for (int i = 1; i < temps.size(); i++) {
		if (temps[i] == 0 || std::abs(temps[i]) < std::abs(closestTemp)) {
			closestTemp = temps[i];
		}
		else if (std::abs(temps[i]) == std::abs(closestTemp))
		{
			closestTemp = std::abs(temps[i]);
		}
	}
	return closestTemp;
}
