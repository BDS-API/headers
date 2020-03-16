#pragma once

#include <string>
#include "Stopwatch.h"


class StopwatchNLast : public Stopwatch {

public:
    virtual ~StopwatchNLast(); // _ZN14StopwatchNLastD2Ev
    virtual void __fake_function0(); // fake
    virtual void stop(); // _ZN14StopwatchNLast4stopEv
    virtual void print(std::string const&); // _ZN14StopwatchNLast5printERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    StopwatchNLast(int); // _ZN14StopwatchNLastC2Ei
};
