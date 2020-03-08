#pragma once

#include "../../unmapped/FilterContext"
#include "../definition/Definition"
#include "../../unmapped/FilterInputs"


class FilterTestHourlyClock : SimpleIntFilterTest {

public:
    FilterTestHourlyClock::~FilterTestHourlyClock()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestHourlyClock(void);
};
