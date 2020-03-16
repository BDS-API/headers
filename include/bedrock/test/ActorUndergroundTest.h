#pragma once

#include "SimpleBoolFilterTest.h"


class ActorUndergroundTest : public SimpleBoolFilterTest {

public:
    virtual ~ActorUndergroundTest(); // _ZN20ActorUndergroundTestD2Ev
    virtual void __fake_function0(); // fake
    virtual void evaluate(FilterContext const&)const; // _ZNK20ActorUndergroundTest8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK20ActorUndergroundTest7getNameEv
    ActorUndergroundTest(); // _ZN20ActorUndergroundTestC2Ev
};
