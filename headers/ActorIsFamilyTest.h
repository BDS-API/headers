#pragma once

class ActorIsFamilyTest : SimpleHashStringFilterTest {

public:
    virtual ~ActorIsFamilyTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsFamilyTest(void);
};
