#pragma once

class ActorHasDamageTest : SimpleIntFilterTest {

public:
    virtual ~ActorHasDamageTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorHasDamageTest(void);
};
