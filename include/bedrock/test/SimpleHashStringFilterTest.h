#pragma once

class SimpleHashStringFilterTest : FilterTest {

public:
    virtual SimpleHashStringFilterTest::~SimpleHashStringFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue(void)const;

    SimpleHashStringFilterTest(void);
};
