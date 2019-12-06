#pragma once

class FilterTestBiomeHumid : SimpleBoolFilterTest {

public:
    virtual ~FilterTestBiomeHumid();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void FilterTestBiomeHumid(void);
};
