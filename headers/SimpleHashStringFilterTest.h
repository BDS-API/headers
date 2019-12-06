#pragma once

class SimpleHashStringFilterTest : FilterTest {

public:
    virtual ~SimpleHashStringFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue(void)const;

    void SimpleHashStringFilterTest(void);
};
