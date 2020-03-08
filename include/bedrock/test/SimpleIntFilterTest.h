#pragma once

#include "../../unmapped/FilterInputs"
#include "../definition/Definition"


class SimpleIntFilterTest : FilterTest {

public:
    SimpleIntFilterTest::~SimpleIntFilterTest()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;

    SimpleIntFilterTest(void);
};
