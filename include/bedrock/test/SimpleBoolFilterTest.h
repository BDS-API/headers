#pragma once

#include "FilterTest.h"


class SimpleBoolFilterTest : FilterTest {

public:
    virtual void _serializeValue()const;
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    ~SimpleBoolFilterTest();
    SimpleBoolFilterTest();
};
