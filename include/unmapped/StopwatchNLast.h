#pragma once

#include "Stopwatch.h"
#include <string>


class StopwatchNLast : Stopwatch {

public:
    virtual void stop();
    virtual void print(std::string const&);
    ~StopwatchNLast();
    StopwatchNLast(int);
};
