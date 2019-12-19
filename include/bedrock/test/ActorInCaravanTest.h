#pragma once

class ActorInCaravanTest : SimpleBoolFilterTest {

public:
    virtual ActorInCaravanTest::~ActorInCaravanTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorInCaravanTest(void);
};
