#include <iostream>
#include "Dispatcher.h"
#include "Driver.h"
#include "Financier.h"
#include "Facade.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Реализация с помощью стандартного подхода" << std::endl;
    
    // Создание объектов
    Dispatcher *dispatcher = new Dispatcher();
    Driver* driver = new Driver();
    Financier* financier = new Financier();

    int route = 10;
    int driverID = dispatcher->AssignDriver();
    double price = financier->GetPrice(route);
    driver->DriveCar();
    dispatcher->CompleteOrder(driverID, price, route, financier);    

    delete financier;
    delete driver;
    delete dispatcher;

    // Реализация с помощью паттерна Facade
    Facade* facade = new Facade(route);
    facade->OrderTaxi();
    delete facade;
}