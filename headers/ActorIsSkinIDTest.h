#pragma once

class ActorIsSkinIDTest : SimpleIntFilterTest {

public:
    virtual ~ActorIsSkinIDTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsSkinIDTest(void);
};
