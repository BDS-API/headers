#pragma once

#include "./FilterTest.h"
#include "../../unmapped/Definition.h"
#include "../../unmapped/FilterInputs.h"


class SimpleIntFilterTest : FilterTest {

public:
    virtual ~SimpleIntFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;

    SimpleIntFilterTest();
};
