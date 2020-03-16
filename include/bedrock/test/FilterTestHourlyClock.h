#pragma once

#include "FilterTest.h"
#include "SimpleIntFilterTest.h"


class FilterTestHourlyClock : public SimpleIntFilterTest {

public:
    virtual ~FilterTestHourlyClock(); // _ZN21FilterTestHourlyClockD2Ev
    virtual void __fake_function0(); // fake
    virtual void setup(FilterTest::Definition const&, FilterInputs const&); // _ZN21FilterTestHourlyClock5setupERKN10FilterTest10DefinitionERK12FilterInputs
    virtual void evaluate(FilterContext const&)const; // _ZNK21FilterTestHourlyClock8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK21FilterTestHourlyClock7getNameEv
    FilterTestHourlyClock(); // _ZN21FilterTestHourlyClockC2Ev
};
