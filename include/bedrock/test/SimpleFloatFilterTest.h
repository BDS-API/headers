#pragma once

#include "../../unmapped/FilterInputs"
#include "../definition/Definition"


class SimpleFloatFilterTest : FilterTest {

public:
    SimpleFloatFilterTest::~SimpleFloatFilterTest()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;

    SimpleFloatFilterTest(void);
};
