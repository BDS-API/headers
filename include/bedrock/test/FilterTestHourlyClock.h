#pragma once

#include "./SimpleIntFilterTest.h"
#include "../../unmapped/FilterInputs.h"
#include "../../unmapped/Definition.h"
#include "../../unmapped/FilterContext.h"


class FilterTestHourlyClock : SimpleIntFilterTest {

public:
    virtual ~FilterTestHourlyClock();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestHourlyClock();
};
