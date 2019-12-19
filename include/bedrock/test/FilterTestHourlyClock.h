#pragma once

class FilterTestHourlyClock : SimpleIntFilterTest {

public:
    virtual FilterTestHourlyClock::~FilterTestHourlyClock();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    FilterTestHourlyClock(void);
};
