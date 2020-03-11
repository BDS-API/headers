#pragma once

#include "./SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestAltitude : SimpleIntFilterTest {

public:
    virtual ~FilterTestAltitude();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestAltitude();
};
