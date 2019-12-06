#pragma once

class ActorIsOwnerTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsOwnerTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsOwnerTest(void);
};
