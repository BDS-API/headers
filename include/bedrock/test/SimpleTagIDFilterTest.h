#pragma once

#include "./FilterTest.h"
#include "../../unmapped/Definition.h"
#include "../../unmapped/FilterInputs.h"
#include "../../unmapped/TagRegistry.h"
#include <string>


class SimpleTagIDFilterTest : FilterTest {

public:
    virtual ~SimpleTagIDFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;

    SimpleTagIDFilterTest();
    void updateCachedIDValue(std::string const&, TagRegistry const&)const;
    void getTagValue();
};
