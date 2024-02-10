#pragma once
#include <string>
#include <iostream>
class Strategy
{
public:
    virtual ~Strategy() = default;
    virtual std::string exportData() = 0;
};

