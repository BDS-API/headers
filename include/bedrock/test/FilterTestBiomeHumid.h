#pragma once

#include "../../unmapped/FilterContext"


class FilterTestBiomeHumid : SimpleBoolFilterTest {

public:
    FilterTestBiomeHumid::~FilterTestBiomeHumid()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestBiomeHumid(void);
};
