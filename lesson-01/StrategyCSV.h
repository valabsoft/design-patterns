#pragma once
#include "Strategy.h"
// Класс стратегии для экспорта данных в CSV формате
class StrategyCSV : public Strategy
{
public:
	StrategyCSV();
	~StrategyCSV() = default;
private:
	std::string exportData() override;
};

