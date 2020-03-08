#pragma once

#include "../../unmapped/FilterContext"


class FilterTestAltitude : SimpleIntFilterTest {

public:
    FilterTestAltitude::~FilterTestAltitude()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestAltitude(void);
};
