#pragma once

#include "FilterTest.h"


class FilterTestGameRule : FilterTest {

public:
    ~FilterTestGameRule(); // _ZN18FilterTestGameRuleD2Ev
    virtual void setup(FilterTest::Definition const&, FilterInputs const&); // _ZN18FilterTestGameRule5setupERKN10FilterTest10DefinitionERK12FilterInputs
    virtual void evaluate(FilterContext const&)const; // _ZNK18FilterTestGameRule8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK18FilterTestGameRule7getNameEv
    virtual void _serializeValue()const; // _ZNK18FilterTestGameRule15_serializeValueEv
    FilterTestGameRule(); // _ZN18FilterTestGameRuleC2Ev
};
