#pragma once

#include "SimpleIntFilterTest.h"


class FilterTestDifficulty : SimpleIntFilterTest {

public:
    ~FilterTestDifficulty(); // _ZN20FilterTestDifficultyD2Ev
    virtual void evaluate(FilterContext const&)const; // _ZNK20FilterTestDifficulty8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK20FilterTestDifficulty7getNameEv
    FilterTestDifficulty(); // _ZN20FilterTestDifficultyC2Ev
};
