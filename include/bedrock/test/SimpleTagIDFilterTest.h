#pragma once

#include <string>
#include "../../unmapped/TagRegistry.h"
#include "FilterTest.h"
#include "../../unmapped/FilterInputs.h"


class SimpleTagIDFilterTest : FilterTest {

public:
    ~SimpleTagIDFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;
    SimpleTagIDFilterTest();
    void updateCachedIDValue(std::string const&, TagRegistry const&)const;
    void getTagValue();
};
