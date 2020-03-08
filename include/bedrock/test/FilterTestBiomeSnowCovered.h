#pragma once

#include "../../unmapped/FilterContext"


class FilterTestBiomeSnowCovered : SimpleBoolFilterTest {

public:
    FilterTestBiomeSnowCovered::~FilterTestBiomeSnowCovered()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestBiomeSnowCovered(void);
};
