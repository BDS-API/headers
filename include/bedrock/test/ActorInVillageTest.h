#pragma once

class ActorInVillageTest : SimpleBoolFilterTest {

public:
    virtual ActorInVillageTest::~ActorInVillageTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorInVillageTest(void);
};
