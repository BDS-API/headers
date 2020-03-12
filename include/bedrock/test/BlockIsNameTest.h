#pragma once

#include "../../unmapped/FilterContext.h"
#include "SimpleHashStringFilterTest.h"


class BlockIsNameTest : SimpleHashStringFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~BlockIsNameTest();
    virtual void getName()const;
    BlockIsNameTest();
};
