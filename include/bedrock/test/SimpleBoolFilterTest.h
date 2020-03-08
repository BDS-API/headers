#pragma once

#include "../definition/Definition"


class SimpleBoolFilterTest : FilterTest {

public:
    virtual SimpleBoolFilterTest::~SimpleBoolFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue(void)const;

    SimpleBoolFilterTest(void);
};
