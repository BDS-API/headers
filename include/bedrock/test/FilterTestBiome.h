#pragma once

class FilterTestBiome : SimpleIntFilterTest {

public:
    virtual FilterTestBiome::~FilterTestBiome();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    FilterTestBiome(void);
};
