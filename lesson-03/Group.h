#pragma once

#include <string>
#include <vector>
#include <memory>

#include "StrategyExportData.h"
#include "Student.h"

class Group
{
public:
	std::string name;
	std::vector<std::unique_ptr<Student>> group;
private:
	// Указатель на объект стратигии
	std::unique_ptr<StrategyExportData> _strategy;
public:
	Group();
	~Group();
	// Метод для задания стратегии
	void setStrategy(std::unique_ptr<StrategyExportData>&& strategy);
	// Полиморфный метод для вывода данных
	std::string exportData();
};

