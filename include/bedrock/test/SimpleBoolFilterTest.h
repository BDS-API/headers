#pragma once

#include "./FilterTest.h"
#include "../../unmapped/Definition.h"
#include "../../unmapped/FilterInputs.h"


class SimpleBoolFilterTest : FilterTest {

public:
    virtual ~SimpleBoolFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;

    SimpleBoolFilterTest();
};
