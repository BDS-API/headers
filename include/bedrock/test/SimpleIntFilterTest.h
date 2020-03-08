#pragma once

#include "../definition/Definition"
#include "../../unmapped/FilterInputs"


class SimpleIntFilterTest : FilterTest {

public:
    virtual SimpleIntFilterTest::~SimpleIntFilterTest()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;

    SimpleIntFilterTest(void);
};
