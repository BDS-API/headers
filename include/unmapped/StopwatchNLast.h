#pragma once

class StopwatchNLast : Stopwatch {

public:
    virtual StopwatchNLast::~StopwatchNLast();
    virtual void stop(void);
    virtual void print(std::string const&);

    StopwatchNLast(int);
};
