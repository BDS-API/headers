#pragma once

#include "../../unmapped/FilterContext"


class FilterTestBiome : SimpleIntFilterTest {

public:
    virtual FilterTestBiome::~FilterTestBiome()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestBiome(void);
};
