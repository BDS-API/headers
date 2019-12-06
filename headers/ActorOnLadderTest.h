#pragma once

class ActorOnLadderTest : SimpleBoolFilterTest {

public:
    virtual ~ActorOnLadderTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorOnLadderTest(void);
};
