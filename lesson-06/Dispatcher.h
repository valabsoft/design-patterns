#pragma once
#include <iostream>
#include "Financier.h"
// Диспетчер
class Dispatcher
{
public:
	Dispatcher();
	int AssignDriver(); // Назначить водителя
	void CompleteOrder(int driverID, double price, int route, Financier *financier); // Завершить заказ
};

