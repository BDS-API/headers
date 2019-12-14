#pragma once

class StopwatchNLast : Stopwatch {

public:
    virtual ~StopwatchNLast();
    virtual void stop(void);
    virtual void print(std::string const&);

    void StopwatchNLast(int);
};
