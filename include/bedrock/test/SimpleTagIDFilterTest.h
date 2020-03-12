#pragma once

#include <string>
#include "FilterTest.h"


class SimpleTagIDFilterTest : FilterTest {

public:
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    ~SimpleTagIDFilterTest();
    virtual void _serializeValue()const;
    void getTagValue();
    void updateCachedIDValue(std::string const&, TagRegistry const&)const;
    SimpleTagIDFilterTest();
};
