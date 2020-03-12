#pragma once

#include <string>


class Stopwatch {

public:
    virtual void stop();
    virtual void stopContinue();
    ~Stopwatch();
    virtual void print(std::string const&);
    void getMax();
    void getCount();
    void start();
    bool isReset()const;
    void getLast();
    void getTotal();
    void printEvery(int, std::string const&);
    void tick();
    Stopwatch();
    void reset();
};
