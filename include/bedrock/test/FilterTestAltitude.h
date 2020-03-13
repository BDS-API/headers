#pragma once

#include "SimpleIntFilterTest.h"


class FilterTestAltitude : SimpleIntFilterTest {

public:
    ~FilterTestAltitude(); // _ZN18FilterTestAltitudeD2Ev
    virtual void evaluate(FilterContext const&)const; // _ZNK18FilterTestAltitude8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK18FilterTestAltitude7getNameEv
    FilterTestAltitude(); // _ZN18FilterTestAltitudeC2Ev
};
