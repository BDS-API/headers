#pragma once

class ActorIsVariantTest : SimpleIntFilterTest {

public:
    virtual ~ActorIsVariantTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsVariantTest(void);
};
