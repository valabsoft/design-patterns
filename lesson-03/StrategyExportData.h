#pragma once
#include <string>
#include <iostream>
#include <vector>

#include "Student.h"

// Абстрактный класс стратегии
class StrategyExportData
{
public:
    virtual ~StrategyExportData() = default;
    virtual std::string exportData(std::vector<std::unique_ptr<Student>>& students) = 0;
};

