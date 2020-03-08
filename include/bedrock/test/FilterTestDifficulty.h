#pragma once

#include "../../unmapped/FilterContext"


class FilterTestDifficulty : SimpleIntFilterTest {

public:
    virtual FilterTestDifficulty::~FilterTestDifficulty()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestDifficulty(void);
};
