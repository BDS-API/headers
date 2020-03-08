#pragma once



class StopwatchNLast : Stopwatch {

public:
    StopwatchNLast::~StopwatchNLast()
    virtual void stop();
    virtual void print(std::string const&);

    StopwatchNLast(int);
};
