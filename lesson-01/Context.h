#pragma once
#include <memory>
#include "Strategy.h"
// Класс контекста
class Context
{
private:
	// Указатель на объект стратигии
	std::unique_ptr<Strategy> _strategy;
public:
	Context();
	// Метод для задания стратегии
	void setStrategy(std::unique_ptr<Strategy>&& strategy);
	// Полиморфный метод для вывода данных
	std::string exportData();
};

