#pragma once

#include "../definition/Definition"
#include "../../unmapped/FilterInputs"


class SimpleBoolFilterTest : FilterTest {

public:
    virtual SimpleBoolFilterTest::~SimpleBoolFilterTest()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;

    SimpleBoolFilterTest(void);
};
