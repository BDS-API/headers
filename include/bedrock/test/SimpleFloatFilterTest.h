#pragma once

#include "./FilterTest.h"
#include "../../unmapped/Definition.h"
#include "../../unmapped/FilterInputs.h"


class SimpleFloatFilterTest : FilterTest {

public:
    virtual ~SimpleFloatFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;

    SimpleFloatFilterTest();
};
