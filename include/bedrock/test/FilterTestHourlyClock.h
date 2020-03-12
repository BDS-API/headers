#pragma once

#include "SimpleIntFilterTest.h"


class FilterTestHourlyClock : SimpleIntFilterTest {

public:
    ~FilterTestHourlyClock();
    virtual void evaluate(FilterContext const&)const;
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void getName()const;
    FilterTestHourlyClock();
};
