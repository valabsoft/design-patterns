#include "StrategyTXT.h"
StrategyTXT::StrategyTXT()
{
	std::cout << "StrategyTXT constructor" << std::endl;
}
std::string StrategyTXT::exportData()
{
	std::cout << "Export data with TXT strategy"  << std::endl;
	return "TXT";
}
