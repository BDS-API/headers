#pragma once

#include "./Stopwatch.h"
#include <string>


class StopwatchNLast : Stopwatch {

public:
    virtual ~StopwatchNLast();
    virtual void stop();
    virtual void print(std::string const&);

    StopwatchNLast(int);
};
