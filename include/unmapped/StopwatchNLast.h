#pragma once

#include <string>
#include "Stopwatch.h"


class StopwatchNLast : Stopwatch {

public:
    virtual void print(std::string const&);
    virtual void stop();
    ~StopwatchNLast();
    StopwatchNLast(int);
};
