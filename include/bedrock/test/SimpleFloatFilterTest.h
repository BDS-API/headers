#pragma once

#include "../definition/Definition"
#include "../../unmapped/FilterInputs"


class SimpleFloatFilterTest : FilterTest {

public:
    virtual SimpleFloatFilterTest::~SimpleFloatFilterTest()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;

    SimpleFloatFilterTest(void);
};
