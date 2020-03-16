#pragma once

#include "SimpleFloatFilterTest.h"


class FilterTestClock : public SimpleFloatFilterTest {

public:
    virtual ~FilterTestClock(); // _ZN15FilterTestClockD2Ev
    virtual void __fake_function0(); // fake
    virtual void evaluate(FilterContext const&)const; // _ZNK15FilterTestClock8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK15FilterTestClock7getNameEv
    FilterTestClock(); // _ZN15FilterTestClockC2Ev
};
