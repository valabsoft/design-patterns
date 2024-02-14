#pragma once
#include "Strategy.h"
// Класс стратегии для экспорта данных в TXT формате
class StrategyTXT : public Strategy
{
public:
	StrategyTXT();
	~StrategyTXT() = default;
private:
	std::string exportData() override;
};

