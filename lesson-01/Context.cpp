#include "Context.h"
Context::Context()
{
	_strategy = NULL;
}
void Context::setStrategy(std::unique_ptr<Strategy>&& strategy)
{
	if (strategy)
		_strategy = std::move(strategy);
}
std::string Context::exportData()
{
	if (_strategy)
		return _strategy->exportData();
	else
		return "ERROR";
}
