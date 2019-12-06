#pragma once

class ActorInCaravanTest : SimpleBoolFilterTest {

public:
    virtual ~ActorInCaravanTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorInCaravanTest(void);
};
