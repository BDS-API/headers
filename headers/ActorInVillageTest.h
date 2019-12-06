#pragma once

class ActorInVillageTest : SimpleBoolFilterTest {

public:
    virtual ~ActorInVillageTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorInVillageTest(void);
};
