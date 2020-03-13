#pragma once

#include "FilterTest.h"


class SimpleBoolFilterTest : FilterTest {

public:
    ~SimpleBoolFilterTest(); // _ZN20SimpleBoolFilterTestD2Ev
    virtual void setup(FilterTest::Definition const&, FilterInputs const&); // _ZN20SimpleBoolFilterTest5setupERKN10FilterTest10DefinitionERK12FilterInputs
    virtual void _serializeValue()const; // _ZNK20SimpleBoolFilterTest15_serializeValueEv
    SimpleBoolFilterTest(); // _ZN20SimpleBoolFilterTestC2Ev
};
