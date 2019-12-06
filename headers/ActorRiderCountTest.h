#pragma once

class ActorRiderCountTest : SimpleIntFilterTest {

public:
    virtual ~ActorRiderCountTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorRiderCountTest(void);
};
