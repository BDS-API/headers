#pragma once

#include "FilterTest.h"
#include "../../unmapped/FilterInputs.h"


class SimpleHashStringFilterTest : FilterTest {

public:
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;
    ~SimpleHashStringFilterTest();
    SimpleHashStringFilterTest();
};
