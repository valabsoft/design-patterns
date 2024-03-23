#include <iostream>
#include "Settings.h"

int main()
{
    std::shared_ptr<Settings>& settings = Settings::Instance();
    std::cout << "Application Settings ===>" << std::endl;
    std::cout << "IP: " << settings->getIP() << std::endl;
    std::cout << "Port Number: " << settings->getPortNumber() << std::endl;
    std::cout << "Update Rate: " << settings->getUpdateRate() << std::endl;
}