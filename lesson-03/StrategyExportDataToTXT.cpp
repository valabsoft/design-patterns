#include "StrategyExportDataToTXT.h"
#include <sstream>

StrategyExportDataToTXT::StrategyExportDataToTXT()
{
	std::cout << std::endl << "StrategyTXT constructor" << std::endl;
}
std::string StrategyExportDataToTXT::exportData(std::vector<std::unique_ptr<Student>>& students)
{
	std::cout << "Export data with TXT strategy" << std::endl;
	
	std::stringstream output;
	int counter = 0;

	try
	{
		for (auto& student : students)
		{
			counter++;
			std::cout << counter << "\t" << student->getYearOfBirth() 
				<< "\t" << student->getIndInsAccNumber() 
				<< "\t" << student->getAvgGrade() << "\t" 
				<< student->getFullName() << std::endl;
			output << counter << "\t" << student->getYearOfBirth() 
				<< "\t" << student->getIndInsAccNumber() 
				<< "\t" << student->getAvgGrade() << "\t" 
				<< student->getFullName() << std::endl;
		}
		return output.str();
	}
	catch (...)
	{
		return "TXT ERROR";
	}
}
