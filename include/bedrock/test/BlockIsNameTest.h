#pragma once

#include "SimpleHashStringFilterTest.h"


class BlockIsNameTest : SimpleHashStringFilterTest {

public:
    ~BlockIsNameTest(); // _ZN15BlockIsNameTestD2Ev
    virtual void evaluate(FilterContext const&)const; // _ZNK15BlockIsNameTest8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK15BlockIsNameTest7getNameEv
    BlockIsNameTest(); // _ZN15BlockIsNameTestC2Ev
};
