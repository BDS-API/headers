#pragma once

#include "../../unmapped/FilterContext"


class FilterTestBiomeHumid : SimpleBoolFilterTest {

public:
    virtual FilterTestBiomeHumid::~FilterTestBiomeHumid()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestBiomeHumid(void);
};
