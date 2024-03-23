#include "Settings.h"

Settings* Settings::_pInstance = nullptr;

Settings* Settings::Instance()
{
	if (_pInstance == nullptr)
		_pInstance = new Settings();

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
int Settings::getPortNumber()
{
	return _portNumber;
}

