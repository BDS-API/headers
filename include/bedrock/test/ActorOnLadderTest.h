#pragma once

class ActorOnLadderTest : SimpleBoolFilterTest {

public:
    virtual ActorOnLadderTest::~ActorOnLadderTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorOnLadderTest(void);
};
