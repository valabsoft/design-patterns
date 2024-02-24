#pragma once
#include "StrategyExportData.h"
// Класс стратегии для экспорта данных в TXT формате
class StrategyExportDataToTXT : public StrategyExportData
{
public:
	StrategyExportDataToTXT();
	~StrategyExportDataToTXT() = default;
private:
	std::string exportData(std::vector<std::unique_ptr<Student>>& students) override;
};

