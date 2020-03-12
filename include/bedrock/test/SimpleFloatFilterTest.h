#pragma once

#include "FilterTest.h"
#include "../../unmapped/FilterInputs.h"


class SimpleFloatFilterTest : FilterTest {

public:
    ~SimpleFloatFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;
    SimpleFloatFilterTest();
};
