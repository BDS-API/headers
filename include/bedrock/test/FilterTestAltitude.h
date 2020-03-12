#pragma once

#include "SimpleIntFilterTest.h"


class FilterTestAltitude : SimpleIntFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ~FilterTestAltitude();
    FilterTestAltitude();
};
