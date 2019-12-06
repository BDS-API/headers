#pragma once

class ActorIsMarkVariantTest : SimpleIntFilterTest {

public:
    virtual ~ActorIsMarkVariantTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsMarkVariantTest(void);
};
