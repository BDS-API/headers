#pragma once

#include "FilterTest.h"


class SimpleFloatFilterTest : FilterTest {

public:
    ~SimpleFloatFilterTest(); // _ZN21SimpleFloatFilterTestD2Ev
    virtual void setup(FilterTest::Definition const&, FilterInputs const&); // _ZN21SimpleFloatFilterTest5setupERKN10FilterTest10DefinitionERK12FilterInputs
    virtual void _serializeValue()const; // _ZNK21SimpleFloatFilterTest15_serializeValueEv
    SimpleFloatFilterTest(); // _ZN21SimpleFloatFilterTestC2Ev
};
