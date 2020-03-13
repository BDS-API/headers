#pragma once

#include <string>
#include "Stopwatch.h"


class StopwatchNLast : Stopwatch {

public:
    ~StopwatchNLast(); // _ZN14StopwatchNLastD2Ev
    virtual void stop(); // _ZN14StopwatchNLast4stopEv
    virtual void print(std::string const&); // _ZN14StopwatchNLast5printERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    StopwatchNLast(int); // _ZN14StopwatchNLastC2Ei
};
