#pragma once

class FilterTestDifficulty : SimpleIntFilterTest {

public:
    virtual FilterTestDifficulty::~FilterTestDifficulty();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    FilterTestDifficulty(void);
};
