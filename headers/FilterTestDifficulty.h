#pragma once

class FilterTestDifficulty : SimpleIntFilterTest {

public:
    virtual ~FilterTestDifficulty();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void FilterTestDifficulty(void);
};
