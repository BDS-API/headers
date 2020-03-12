#pragma once

#include "FilterTest.h"


class SimpleFloatFilterTest : FilterTest {

public:
    virtual void _serializeValue()const;
    ~SimpleFloatFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    SimpleFloatFilterTest();
};
