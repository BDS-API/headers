#pragma once

class ActorIsSkinIDTest : SimpleIntFilterTest {

public:
    virtual ActorIsSkinIDTest::~ActorIsSkinIDTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsSkinIDTest(void);
};
