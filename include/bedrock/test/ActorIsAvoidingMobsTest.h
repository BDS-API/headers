#pragma once

class ActorIsAvoidingMobsTest : SimpleBoolFilterTest {

public:
    virtual ActorIsAvoidingMobsTest::~ActorIsAvoidingMobsTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsAvoidingMobsTest(void);
};
