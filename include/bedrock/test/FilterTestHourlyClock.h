#pragma once

#include "SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"
#include "FilterTest.h"
#include "../../unmapped/FilterInputs.h"


class FilterTestHourlyClock : SimpleIntFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    ~FilterTestHourlyClock();
    FilterTestHourlyClock();
};
