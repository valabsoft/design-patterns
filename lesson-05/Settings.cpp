#include "Settings.h"

std::shared_ptr<Settings> Settings::_pInstance = nullptr;

std::shared_ptr<Settings> &Settings::Instance()
{
	if (_pInstance == nullptr)
		_pInstance = std::shared_ptr<Settings>(new Settings());

	return _pInstance;
}
Settings::Settings()
{
	_pInstance = nullptr;

	_updateRate = 1000;
	_IP = "127.0.0.1";
	_portNumber = 8080;
}

int Settings::getUpdateRate()
{
	return _updateRate;
}
std::string Settings::getIP()
{
	return _IP;
}
void Settings::setIP(std::string ip)
{
	_IP = ip;
}
int Settings::getPortNumber()
{
	return _portNumber;
}

