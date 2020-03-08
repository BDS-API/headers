#pragma once

#include "../../unmapped/FilterInputs"
#include "../definition/Definition"
#include "../../unmapped/TagRegistry"


class SimpleTagIDFilterTest : FilterTest {

public:
    SimpleTagIDFilterTest::~SimpleTagIDFilterTest()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;

    SimpleTagIDFilterTest(void);
    void updateCachedIDValue(std::string const&, TagRegistry const&)const;
    void getTagValue();
};
