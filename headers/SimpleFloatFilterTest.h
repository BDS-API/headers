#pragma once

class SimpleFloatFilterTest : FilterTest {

public:
    virtual ~SimpleFloatFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue(void)const;

    void SimpleFloatFilterTest(void);
};
