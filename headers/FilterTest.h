#pragma once

class FilterTest {

public:
    virtual ~FilterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void finalizeParsedValue(IWorldRegistriesProvider &);
    virtual void _serializeDomain(void)const;

    void FilterTest(void);
    void serialize(void)const;
    void _testValuesWithOperator(bool, bool)const;
    void _testValuesWithOperator(int, int)const;
    void _testValuesWithOperator(float, float)const;
    void _testValuesWithOperator(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void getSubject(void)const;
};
