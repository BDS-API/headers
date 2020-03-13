#pragma once

#include "SimpleFloatFilterTest.h"


class FilterTestMoonIntensity : SimpleFloatFilterTest {

public:
    ~FilterTestMoonIntensity(); // _ZN23FilterTestMoonIntensityD2Ev
    virtual void evaluate(FilterContext const&)const; // _ZNK23FilterTestMoonIntensity8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK23FilterTestMoonIntensity7getNameEv
    FilterTestMoonIntensity(); // _ZN23FilterTestMoonIntensityC2Ev
};
