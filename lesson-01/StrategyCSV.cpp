#include "StrategyCSV.h"

StrategyCSV::StrategyCSV()
{
	std::cout << "StrategyCSV constructor" << std::endl;
}
std::string StrategyCSV::exportData()
{
	std::cout << "Export data with CSV strategy" << std::endl;
	return "CSV";
}