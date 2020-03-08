#pragma once

#include "../definition/Definition"


class SimpleHashStringFilterTest : FilterTest {

public:
    virtual SimpleHashStringFilterTest::~SimpleHashStringFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue(void)const;

    SimpleHashStringFilterTest(void);
};
