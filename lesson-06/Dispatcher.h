#pragma once
#include <iostream>
#include "Financier.h"
// ���������
class Dispatcher
{
public:
	Dispatcher();
	int AssignDriver(); // ��������� ��������
	void CompleteOrder(int driverID, double price, int route, Financier *financier); // ��������� �����
};

