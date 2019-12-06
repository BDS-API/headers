#pragma once

class FilterTestClock : SimpleFloatFilterTest {

public:
    virtual ~FilterTestClock();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void FilterTestClock(void);
};
