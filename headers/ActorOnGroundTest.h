#pragma once

class ActorOnGroundTest : SimpleBoolFilterTest {

public:
    virtual ~ActorOnGroundTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorOnGroundTest(void);
};
