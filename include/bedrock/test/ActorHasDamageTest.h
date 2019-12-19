#pragma once

class ActorHasDamageTest : SimpleIntFilterTest {

public:
    virtual ActorHasDamageTest::~ActorHasDamageTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorHasDamageTest(void);
};
