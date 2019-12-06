#pragma once

class SimpleTagIDFilterTest : FilterTest {

public:
    virtual ~SimpleTagIDFilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void _serializeValue(void)const;

    void SimpleTagIDFilterTest(void);
    void updateCachedIDValue(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, TagRegistry const&)const;
    void getTagValue(void);
};
