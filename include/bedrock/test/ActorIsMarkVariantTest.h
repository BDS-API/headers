#pragma once

class ActorIsMarkVariantTest : SimpleIntFilterTest {

public:
    virtual ActorIsMarkVariantTest::~ActorIsMarkVariantTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsMarkVariantTest(void);
};
