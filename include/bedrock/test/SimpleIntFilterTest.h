#pragma once

#include "FilterTest.h"


class SimpleIntFilterTest : FilterTest {

public:
    virtual void _serializeValue()const;
    ~SimpleIntFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    SimpleIntFilterTest();
};
