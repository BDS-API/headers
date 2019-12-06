#pragma once

class ActorHasComponentTest : SimpleHashStringFilterTest {

public:
    virtual ~ActorHasComponentTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorHasComponentTest(void);
};
