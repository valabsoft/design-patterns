#include "Facade.h"
Facade::Facade(int route)
{
	_route = route;
}
void Facade::OrderTaxi()
{
    std::cout << std::endl << "Реализация с помощью паттерна FACADE" << std::endl;

    Dispatcher* dispatcher = new Dispatcher();
    Driver* driver = new Driver();
    Financier* financier = new Financier();
        
    int driverID = dispatcher->AssignDriver();
    double price = financier->GetPrice(_route);
    driver->DriveCar();
    dispatcher->CompleteOrder(driverID, price, _route, financier);

    delete financier;
    delete driver;
    delete dispatcher;
}