#pragma once

#include "SimpleBoolFilterTest.h"


class FilterTestBiomeHumid : SimpleBoolFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~FilterTestBiomeHumid();
    virtual void getName()const;
    FilterTestBiomeHumid();
};
