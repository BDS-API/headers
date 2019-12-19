#pragma once

class ActorIsImmobileTest : SimpleBoolFilterTest {

public:
    virtual ActorIsImmobileTest::~ActorIsImmobileTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsImmobileTest(void);
};
