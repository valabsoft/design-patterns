#include <iostream>
#include "Settings.h"

int main()
{
    std::cout << "Application Settings ===>" << std::endl;
    std::cout << "IP: " << Settings::Instance()->getIP() << std::endl;
    std::cout << "Port Number: " << Settings::Instance()->getPortNumber() << std::endl;
    std::cout << "Update Rate: " << Settings::Instance()->getUpdateRate() << std::endl;
}