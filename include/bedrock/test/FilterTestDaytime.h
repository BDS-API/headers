#pragma once

#include "SimpleBoolFilterTest.h"


class FilterTestDaytime : SimpleBoolFilterTest {

public:
    ~FilterTestDaytime(); // _ZN17FilterTestDaytimeD2Ev
    virtual void evaluate(FilterContext const&)const; // _ZNK17FilterTestDaytime8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK17FilterTestDaytime7getNameEv
    FilterTestDaytime(); // _ZN17FilterTestDaytimeC2Ev
};
