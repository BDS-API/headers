#pragma once

#include <string>


class Stopwatch {

public:
    virtual void print(std::string const&);
    virtual void stopContinue();
    ~Stopwatch();
    virtual void stop();
    Stopwatch();
    void getCount();
    bool isReset()const;
    void getLast();
    void getMax();
    void printEvery(int, std::string const&);
    void tick();
    void start();
    void getTotal();
    void reset();
};
