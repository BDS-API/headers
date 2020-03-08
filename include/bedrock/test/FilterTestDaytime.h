#pragma once

#include "../../unmapped/FilterContext"


class FilterTestDaytime : SimpleBoolFilterTest {

public:
    virtual FilterTestDaytime::~FilterTestDaytime()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestDaytime(void);
};
