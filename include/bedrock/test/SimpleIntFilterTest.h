#pragma once

class SimpleIntFilterTest : FilterTest {

public:
    virtual SimpleIntFilterTest::~SimpleIntFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue(void)const;

    SimpleIntFilterTest(void);
};
