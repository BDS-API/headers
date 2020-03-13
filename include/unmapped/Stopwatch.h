#pragma once

#include <string>


class Stopwatch {

public:
    ~Stopwatch(); // _ZN9StopwatchD2Ev
    virtual void stop(); // _ZN9Stopwatch4stopEv
    virtual void stopContinue(); // _ZN9Stopwatch12stopContinueEv
    virtual void print(std::string const&); // _ZN9Stopwatch5printERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    Stopwatch(); // _ZN9StopwatchC2Ev
    void getLast(); // _ZN9Stopwatch7getLastEv
    void getMax(); // _ZN9Stopwatch6getMaxEv
    void reset(); // _ZN9Stopwatch5resetEv
    void start(); // _ZN9Stopwatch5startEv
    void getTotal(); // _ZN9Stopwatch8getTotalEv
    void getCount(); // _ZN9Stopwatch8getCountEv
    void tick(); // _ZN9Stopwatch4tickEv
    bool isReset()const; // _ZNK9Stopwatch7isResetEv
    void printEvery(int, std::string const&); // _ZN9Stopwatch10printEveryEiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
