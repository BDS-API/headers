#pragma once

class ActorInWeatherTest : FilterTest {

public:
    virtual ~ActorInWeatherTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;
    virtual void _serializeValue(void)const;

    void ActorInWeatherTest(void);
};
