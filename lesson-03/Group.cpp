#include "Group.h"

Group::Group()
{
	_strategy = nullptr;
}
Group::~Group()
{	
	_strategy = nullptr;
	for (auto& student : group)
		student = nullptr;
}
void Group::setStrategy(std::unique_ptr<StrategyExportData>&& strategy)
{
	if (strategy)
		_strategy = std::move(strategy);
}
std::string Group::exportData()
{
	if (_strategy)
	{		
		return _strategy->exportData(group);
	}		
	else
		return "ERROR";
}
