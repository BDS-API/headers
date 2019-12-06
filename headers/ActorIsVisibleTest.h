#pragma once

class ActorIsVisibleTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsVisibleTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsVisibleTest(void);
};
