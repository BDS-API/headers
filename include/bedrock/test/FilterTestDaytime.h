#pragma once

#include "SimpleBoolFilterTest.h"


class FilterTestDaytime : public SimpleBoolFilterTest {

public:
    virtual ~FilterTestDaytime(); // _ZN17FilterTestDaytimeD2Ev
    virtual void __fake_function0(); // fake
    virtual void evaluate(FilterContext const&)const; // _ZNK17FilterTestDaytime8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK17FilterTestDaytime7getNameEv
    FilterTestDaytime(); // _ZN17FilterTestDaytimeC2Ev
};
