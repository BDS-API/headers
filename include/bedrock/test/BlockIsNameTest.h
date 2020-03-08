#pragma once

#include "../../unmapped/FilterContext"


class BlockIsNameTest : SimpleHashStringFilterTest {

public:
    virtual BlockIsNameTest::~BlockIsNameTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    BlockIsNameTest(void);
};
