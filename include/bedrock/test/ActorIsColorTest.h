#pragma once

class ActorIsColorTest : SimpleIntFilterTest {

public:
    virtual ActorIsColorTest::~ActorIsColorTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsColorTest(void);
};
