#pragma once

class SimpleIntFilterTest : FilterTest {

public:
    virtual ~SimpleIntFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue(void)const;

    void SimpleIntFilterTest(void);
};
