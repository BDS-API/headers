#pragma once

class ActorInLavaTest : SimpleBoolFilterTest {

public:
    virtual ~ActorInLavaTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorInLavaTest(void);
};
