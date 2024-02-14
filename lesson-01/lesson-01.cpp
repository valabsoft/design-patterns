#include <iostream>
#include "Context.h"
#include "StrategyCSV.h"
#include "StrategyTXT.h"

int main()
{
    // Создание объекта контекста
    std::unique_ptr<Context> context = std::make_unique<Context>();
    // Назначение стратегии A (TXT)
    context->setStrategy(std::make_unique<StrategyTXT>());
    context->exportData();
    // Назначение стратегии B (TXT)
    context->setStrategy(std::make_unique<StrategyCSV>());
    context->exportData();
}
