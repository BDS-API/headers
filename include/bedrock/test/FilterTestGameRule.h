#pragma once

class FilterTestGameRule : FilterTest {

public:
    virtual FilterTestGameRule::~FilterTestGameRule();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;
    virtual void _serializeValue(void)const;

    FilterTestGameRule(void);
};
