#pragma once
#include <string>
#include <iostream>
// Абстрактный класс стратегии
class Strategy
{
public:
    virtual ~Strategy() = default;
    virtual std::string exportData() = 0;
};

