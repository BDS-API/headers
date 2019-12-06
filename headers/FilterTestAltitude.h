#pragma once

class FilterTestAltitude : SimpleIntFilterTest {

public:
    virtual ~FilterTestAltitude();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void FilterTestAltitude(void);
};
