#pragma once

#include "./SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsSkinIDTest : SimpleIntFilterTest {

public:
    virtual ~ActorIsSkinIDTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsSkinIDTest();
};
