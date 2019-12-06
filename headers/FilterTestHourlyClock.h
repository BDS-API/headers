#pragma once

class FilterTestHourlyClock : SimpleIntFilterTest {

public:
    virtual ~FilterTestHourlyClock();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void FilterTestHourlyClock(void);
};
