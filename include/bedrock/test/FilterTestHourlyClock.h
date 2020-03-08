#pragma once

#include "../definition/Definition"
#include "../../unmapped/FilterContext"
#include "../../unmapped/FilterInputs"


class FilterTestHourlyClock : SimpleIntFilterTest {

public:
    virtual FilterTestHourlyClock::~FilterTestHourlyClock()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestHourlyClock(void);
};
