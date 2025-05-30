#pragma once
#include <iostream>
// Финансист
class Financier
{
public:
	Financier();
	double GetPrice(int route);
	void PaySalaries(int driverID, double price, int route);
};