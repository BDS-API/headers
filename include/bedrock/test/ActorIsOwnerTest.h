#pragma once

#include "SimpleBoolFilterTest.h"


class ActorIsOwnerTest : SimpleBoolFilterTest {

public:
    ~ActorIsOwnerTest(); // _ZN16ActorIsOwnerTestD2Ev
    virtual void evaluate(FilterContext const&)const; // _ZNK16ActorIsOwnerTest8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK16ActorIsOwnerTest7getNameEv
    ActorIsOwnerTest(); // _ZN16ActorIsOwnerTestC2Ev
};
