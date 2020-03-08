#pragma once

#include "../definition/Definition"
#include "../../unmapped/FilterInputs"


class SimpleHashStringFilterTest : FilterTest {

public:
    virtual SimpleHashStringFilterTest::~SimpleHashStringFilterTest()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;

    SimpleHashStringFilterTest(void);
};
