#pragma once
#include <memory>
#include "Strategy.h"

class Context
{
private:
	std::unique_ptr<Strategy> _strategy;
public:
	Context();
	void setStrategy(std::unique_ptr<Strategy>&& strategy);
	std::string exportData();
};

