#pragma once

#include "../../unmapped/FilterInputs"
#include "../definition/Definition"


class SimpleHashStringFilterTest : FilterTest {

public:
    SimpleHashStringFilterTest::~SimpleHashStringFilterTest()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;

    SimpleHashStringFilterTest(void);
};
