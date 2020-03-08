#pragma once

#include "../../unmapped/FilterContext"


class ActorIsSkinIDTest : SimpleIntFilterTest {

public:
    ActorIsSkinIDTest::~ActorIsSkinIDTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsSkinIDTest(void);
};
