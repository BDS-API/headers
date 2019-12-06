#pragma once

class SimpleBoolFilterTest : FilterTest {

public:
    virtual ~SimpleBoolFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue(void)const;

    void SimpleBoolFilterTest(void);
};
