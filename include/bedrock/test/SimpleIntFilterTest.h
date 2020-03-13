#pragma once

#include "FilterTest.h"


class SimpleIntFilterTest : FilterTest {

public:
    ~SimpleIntFilterTest(); // _ZN19SimpleIntFilterTestD2Ev
    virtual void setup(FilterTest::Definition const&, FilterInputs const&); // _ZN19SimpleIntFilterTest5setupERKN10FilterTest10DefinitionERK12FilterInputs
    virtual void _serializeValue()const; // _ZNK19SimpleIntFilterTest15_serializeValueEv
    SimpleIntFilterTest(); // _ZN19SimpleIntFilterTestC2Ev
};
