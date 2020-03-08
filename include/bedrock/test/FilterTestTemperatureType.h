#pragma once

#include "../../unmapped/FilterContext"


class FilterTestTemperatureType : SimpleIntFilterTest {

public:
    FilterTestTemperatureType::~FilterTestTemperatureType()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestTemperatureType(void);
};
