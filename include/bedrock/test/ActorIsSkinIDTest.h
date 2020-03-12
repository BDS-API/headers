#pragma once

#include "SimpleIntFilterTest.h"


class ActorIsSkinIDTest : SimpleIntFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ~ActorIsSkinIDTest();
    ActorIsSkinIDTest();
};
