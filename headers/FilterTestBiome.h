#pragma once

class FilterTestBiome : SimpleIntFilterTest {

public:
    virtual ~FilterTestBiome();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void FilterTestBiome(void);
};
