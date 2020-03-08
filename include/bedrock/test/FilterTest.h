#pragma once

#include "../../unmapped/IWorldRegistriesProvider"
#include "../../unmapped/FilterInputs"
#include "../definition/Definition"


class FilterTest {

public:
    FilterTest::~FilterTest()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void finalizeParsedValue(IWorldRegistriesProvider &);
    virtual void _serializeDomain()const;

    FilterTest(void);
    void serialize()const;
    void _testValuesWithOperator(bool, bool)const;
    void _testValuesWithOperator(int, int)const;
    void _testValuesWithOperator(float, float)const;
    void _testValuesWithOperator(std::string const&, std::string const&)const;
    void getSubject()const;
};
