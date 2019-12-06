#pragma once

class ActorHasTagTest : SimpleHashStringFilterTest {

public:
    virtual ~ActorHasTagTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorHasTagTest(void);
};
