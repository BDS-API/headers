#pragma once

class ActorUnderwaterTest : SimpleBoolFilterTest {

public:
    virtual ~ActorUnderwaterTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorUnderwaterTest(void);
};
