#pragma once

class ActorIsOwnerTest : SimpleBoolFilterTest {

public:
    virtual ActorIsOwnerTest::~ActorIsOwnerTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsOwnerTest(void);
};
