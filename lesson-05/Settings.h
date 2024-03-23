#pragma once
#include <string>
#include <memory>
class Settings
{
public:
	static std::shared_ptr<Settings> &Instance();
	int getUpdateRate();
	std::string getIP();
	int getPortNumber();
protected:
	Settings();
private:
	static std::shared_ptr<Settings> _pInstance;
	int _updateRate;
	std::string _IP;
	int _portNumber;
};

