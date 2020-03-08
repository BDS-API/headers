#pragma once

#include "../../unmapped/TagRegistry"
#include "../../unmapped/FilterInputs"
#include "../definition/Definition"


class SimpleTagIDFilterTest : FilterTest {

public:
    virtual SimpleTagIDFilterTest::~SimpleTagIDFilterTest()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue()const;

    SimpleTagIDFilterTest(void);
    void updateCachedIDValue(std::string const&, TagRegistry const&)const;
    void getTagValue();
};
