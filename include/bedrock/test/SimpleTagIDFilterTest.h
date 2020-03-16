#pragma once

#include "FilterTest.h"
#include <string>


class SimpleTagIDFilterTest : public FilterTest {

public:
    virtual ~SimpleTagIDFilterTest(); // _ZN21SimpleTagIDFilterTestD2Ev
    virtual void __fake_function0(); // fake
    virtual void setup(FilterTest::Definition const&, FilterInputs const&); // _ZN21SimpleTagIDFilterTest5setupERKN10FilterTest10DefinitionERK12FilterInputs
    virtual void _serializeValue()const; // _ZNK21SimpleTagIDFilterTest15_serializeValueEv
    SimpleTagIDFilterTest(); // _ZN21SimpleTagIDFilterTestC2Ev
    void updateCachedIDValue(std::string const&, TagRegistry const&)const; // _ZNK21SimpleTagIDFilterTest19updateCachedIDValueERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK11TagRegistry
    void getTagValue(); // _ZN21SimpleTagIDFilterTest11getTagValueEv
};
