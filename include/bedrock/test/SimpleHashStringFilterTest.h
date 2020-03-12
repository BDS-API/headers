#pragma once

#include "FilterTest.h"


class SimpleHashStringFilterTest : FilterTest {

public:
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    ~SimpleHashStringFilterTest();
    virtual void _serializeValue()const;
    SimpleHashStringFilterTest();
};
