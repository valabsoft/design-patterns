#pragma once
#include "Strategy.h"

class StrategyCSV : public Strategy
{
public:
	StrategyCSV();
	~StrategyCSV() = default;
private:
	std::string exportData() override;
};

