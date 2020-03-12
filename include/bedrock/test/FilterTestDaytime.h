#pragma once

#include "SimpleBoolFilterTest.h"


class FilterTestDaytime : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    ~FilterTestDaytime();
    virtual void evaluate(FilterContext const&)const;
    FilterTestDaytime();
};
