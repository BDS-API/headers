#pragma once

class ActorIsAvoidingMobsTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsAvoidingMobsTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsAvoidingMobsTest(void);
};
