#pragma once

class ActorTrustsSubjectTest : SimpleBoolFilterTest {

public:
    virtual ~ActorTrustsSubjectTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorTrustsSubjectTest(void);
};
