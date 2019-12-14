#pragma once

class SimpleTagIDFilterTest : FilterTest {

public:
    virtual ~SimpleTagIDFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue(void)const;

    void SimpleTagIDFilterTest(void);
    void updateCachedIDValue(std::string const&, TagRegistry const&)const;
    void getTagValue(void);
};
