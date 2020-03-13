#pragma once

#include "FilterTest.h"


class SimpleHashStringFilterTest : FilterTest {

public:
    ~SimpleHashStringFilterTest(); // _ZN26SimpleHashStringFilterTestD2Ev
    virtual void setup(FilterTest::Definition const&, FilterInputs const&); // _ZN26SimpleHashStringFilterTest5setupERKN10FilterTest10DefinitionERK12FilterInputs
    virtual void _serializeValue()const; // _ZNK26SimpleHashStringFilterTest15_serializeValueEv
    SimpleHashStringFilterTest(); // _ZN26SimpleHashStringFilterTestC2Ev
};
