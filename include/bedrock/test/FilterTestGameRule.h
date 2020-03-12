#pragma once

#include "../../unmapped/FilterContext.h"
#include "FilterTest.h"
#include "../../unmapped/FilterInputs.h"


class FilterTestGameRule : FilterTest {

public:
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~FilterTestGameRule();
    virtual void _serializeValue()const;
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    FilterTestGameRule();
};
