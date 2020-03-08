#pragma once

#include "../../unmapped/FilterContext"
#include "../definition/Definition"
#include "../../unmapped/FilterInputs"


class FilterTestGameRule : FilterTest {

public:
    virtual FilterTestGameRule::~FilterTestGameRule()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    virtual void _serializeValue()const;

    FilterTestGameRule(void);
};
