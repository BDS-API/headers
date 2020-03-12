#pragma once

#include "SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsSkinIDTest : SimpleIntFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~ActorIsSkinIDTest();
    virtual void getName()const;
    ActorIsSkinIDTest();
};
