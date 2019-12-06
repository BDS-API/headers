#pragma once

class ActorIsColorTest : SimpleIntFilterTest {

public:
    virtual ~ActorIsColorTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsColorTest(void);
};
