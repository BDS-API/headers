#pragma once

#include "FilterTest.h"


class FilterTestGameRule : FilterTest {

public:
    ~FilterTestGameRule();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    virtual void _serializeValue()const;
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    FilterTestGameRule();
};
