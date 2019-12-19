#pragma once

class FilterTestAltitude : SimpleIntFilterTest {

public:
    virtual FilterTestAltitude::~FilterTestAltitude();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    FilterTestAltitude(void);
};
