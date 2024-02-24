#include "StrategyExportDataToCSV.h"
#include <sstream>

StrategyExportDataToCSV::StrategyExportDataToCSV()
{
	std::cout << std::endl << "StrategyCSV constructor" << std::endl;
}
std::string StrategyExportDataToCSV::exportData(std::vector<std::unique_ptr<Student>>& students)
{
	std::cout << "Export data with CSV strategy" << std::endl;
	
	std::stringstream output;
	std::string sep = ",";

	int counter = 0;
	
	try
	{
		for (auto& student : students)
		{
			counter++;
			std::cout << counter << sep << student->getFullName() 
				<< sep << student->getYearOfBirth() 
				<< sep << student->getIndInsAccNumber() << std::endl;
			output << counter << sep << student->getFullName() 
				<< sep << student->getYearOfBirth() 
				<< sep << student->getIndInsAccNumber() << std::endl;
		}
		return output.str();
	}
	catch (...)
	{
		return "CSV ERROR";
	}
}