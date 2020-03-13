#pragma once

#include "SimpleIntFilterTest.h"
#include "FilterTest.h"


class FilterTestHourlyClock : SimpleIntFilterTest {

public:
    ~FilterTestHourlyClock(); // _ZN21FilterTestHourlyClockD2Ev
    virtual void setup(FilterTest::Definition const&, FilterInputs const&); // _ZN21FilterTestHourlyClock5setupERKN10FilterTest10DefinitionERK12FilterInputs
    virtual void evaluate(FilterContext const&)const; // _ZNK21FilterTestHourlyClock8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK21FilterTestHourlyClock7getNameEv
    FilterTestHourlyClock(); // _ZN21FilterTestHourlyClockC2Ev
};
