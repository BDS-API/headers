#pragma once

#include "SimpleFloatFilterTest.h"


class FilterTestMoonPhase : SimpleFloatFilterTest {

public:
    ~FilterTestMoonPhase(); // _ZN19FilterTestMoonPhaseD2Ev
    virtual void evaluate(FilterContext const&)const; // _ZNK19FilterTestMoonPhase8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK19FilterTestMoonPhase7getNameEv
    FilterTestMoonPhase(); // _ZN19FilterTestMoonPhaseC2Ev
};
