#pragma once

class ActorIsImmobileTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsImmobileTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsImmobileTest(void);
};
