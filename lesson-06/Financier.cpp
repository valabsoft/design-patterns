#include "Financier.h"
Financier::Financier()
{
}
double Financier::GetPrice(int route)
{
	double price = 0.0;
	switch (route)
	{
	case 5:
		price = 100;
		break;
	case 10:
		price = 90;
		break;
	case 20:
		price = 85;
		break;
	default:
		price = 100;
		break;
	}
	std::cout << "Финансист:\tРасчет стоимости поездки: " << route * price << " руб ..." << std::endl;
	return price;
}
void Financier::PaySalaries(int driverID, double price, int route)
{
	std::cout << "Финансист:\tВыплата водителю " << driverID << ": " << route * price * 0.75 << " руб ..." << std::endl;
}
