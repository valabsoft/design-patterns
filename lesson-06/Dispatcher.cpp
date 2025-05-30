#include "Dispatcher.h"
#include "Financier.h"
Dispatcher::Dispatcher()
{
}
int Dispatcher::AssignDriver()
{
	std::srand(std::time(nullptr));
	int driverID = std::rand() % 10 + 1; // ID �������� 
	std::cout << "���������:\t���������� ��������: " << driverID << " ..." << std::endl;
	return driverID;
}
void Dispatcher::CompleteOrder(int driverID, double price, int route, Financier *financier)
{
	std::cout << "���������:\t���������� ������ ..." << std::endl;
	financier->PaySalaries(driverID, price, route);	
}