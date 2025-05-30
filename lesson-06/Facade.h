#pragma once
#include "Dispatcher.h"
#include "Driver.h"
#include "Financier.h"

class Facade
{
private:
	int _route;
public:
	Facade(int route);
	void OrderTaxi();
};