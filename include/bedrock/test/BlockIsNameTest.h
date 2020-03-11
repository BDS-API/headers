#pragma once

#include "./SimpleHashStringFilterTest.h"
#include "../../unmapped/FilterContext.h"


class BlockIsNameTest : SimpleHashStringFilterTest {

public:
    virtual ~BlockIsNameTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    BlockIsNameTest();
};
