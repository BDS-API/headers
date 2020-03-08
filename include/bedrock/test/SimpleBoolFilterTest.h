#pragma once

#include "../../unmapped/FilterInputs"
#include "../definition/Definition"


class SimpleBoolFilterTest : FilterTest {

public:
    SimpleBoolFilterTest::~SimpleBoolFilterTest()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;

    SimpleBoolFilterTest(void);
};
