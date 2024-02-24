#include <iostream>
#include <fstream>

#include "StrategyExportDataToCSV.h"
#include "StrategyExportDataToTXT.h"

#include "Group.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    
    // Создание объекта контекста
    std::unique_ptr<Group> uts21 = std::make_unique<Group>();
    // Ввод данных о группе
    uts21->name = "UTS-21";
    uts21->group.push_back(std::move(std::make_unique<Student>("Александра", "Алексеева", "123-456-789 01", 2010, 4.5)));
    uts21->group.push_back(std::move(std::make_unique<Student>("Анастасия", "Борщёва", "123-456-789 02", 2010, 4.25)));
    uts21->group.push_back(std::move(std::make_unique<Student>("Евгений", "Зайцев", "123-456-789 03", 2009, 3.0)));
    uts21->group.push_back(std::move(std::make_unique<Student>("Вадим", "Згурский", "123-456-789 04", 2009, 5.0)));
    uts21->group.push_back(std::move(std::make_unique<Student>("Алексей", "Катков", "123-456-789 05", 2009, 5.0)));
    
    // Назначение стратегии - экспорт в CSV
    uts21->setStrategy(std::make_unique<StrategyExportDataToCSV>());
    std::string outCSV = uts21->exportData();

    // Назначение стратегии - экспорт вTXT
    uts21->setStrategy(std::make_unique<StrategyExportDataToTXT>());    
    std::string outTXT = uts21->exportData();

    std::ofstream fileCSV("output.csv");
    fileCSV << outCSV;
    fileCSV.close();

    std::ofstream fileTXT("output.txt");
    fileTXT << outTXT;
    fileTXT.close();
    
}