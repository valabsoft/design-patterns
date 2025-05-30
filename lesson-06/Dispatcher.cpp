#include "Dispatcher.h"
#include "Financier.h"
Dispatcher::Dispatcher()
{
}
int Dispatcher::AssignDriver()
{
	std::srand(std::time(nullptr));
	int driverID = std::rand() % 10 + 1; // ID водителя 
	std::cout << "Диспетчер:\tНазначение водителя: " << driverID << " ..." << std::endl;
	return driverID;
}
void Dispatcher::CompleteOrder(int driverID, double price, int route, Financier *financier)
{
	std::cout << "Диспетчер:\tЗавершение заказа ..." << std::endl;
	financier->PaySalaries(driverID, price, route);	
}