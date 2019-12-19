#pragma once

class ActorInLavaTest : SimpleBoolFilterTest {

public:
    virtual ActorInLavaTest::~ActorInLavaTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorInLavaTest(void);
};
