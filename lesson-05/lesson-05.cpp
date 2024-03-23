#include <iostream>
#include "Settings.h"

int main()
{
    std::shared_ptr<Settings>& settings = Settings::Instance();
    std::cout << "Application Settings ===>" << std::endl;
    std::cout << "IP: " << settings->getIP() << std::endl;
    std::cout << "Port Number: " << settings->getPortNumber() << std::endl;
    std::cout << "Update Rate: " << settings->getUpdateRate() << std::endl;  
    
    std::shared_ptr<Settings>& settingsA = Settings::Instance();
    settings->setIP("192.168.1.1");        
    std::cout << "IP: " << settings->getIP() << std::endl;
    std::cout << "IP: " << settingsA->getIP() << std::endl;
}