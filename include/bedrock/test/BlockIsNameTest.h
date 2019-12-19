#pragma once

class BlockIsNameTest : SimpleHashStringFilterTest {

public:
    virtual BlockIsNameTest::~BlockIsNameTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    BlockIsNameTest(void);
};
