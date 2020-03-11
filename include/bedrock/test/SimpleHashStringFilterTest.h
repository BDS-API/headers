#pragma once

#include "./FilterTest.h"
#include "../../unmapped/Definition.h"
#include "../../unmapped/FilterInputs.h"


class SimpleHashStringFilterTest : FilterTest {

public:
    virtual ~SimpleHashStringFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;

    SimpleHashStringFilterTest();
};
