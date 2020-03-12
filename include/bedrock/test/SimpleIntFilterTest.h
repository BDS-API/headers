#pragma once

#include "FilterTest.h"
#include "../../unmapped/FilterInputs.h"


class SimpleIntFilterTest : FilterTest {

public:
    virtual void _serializeValue()const;
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    ~SimpleIntFilterTest();
    SimpleIntFilterTest();
};
