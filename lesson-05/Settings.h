#pragma once
#include <string>
class Settings
{
public:
	static Settings* Instance();
	int getUpdateRate();
	std::string getIP();
	int getPortNumber();
protected:
	Settings();
private:
	static Settings* _pInstance;
	int _updateRate;
	std::string _IP;
	int _portNumber;
};

