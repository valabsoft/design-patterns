#pragma once
#include <iostream>
// ���������
class Financier
{
public:
	Financier();
	double GetPrice(int route);
	void PaySalaries(int driverID, double price, int route);
};