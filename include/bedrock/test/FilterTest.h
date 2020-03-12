#pragma once

#include "../definition/FilterParamDefinition.h"
#include <string>
#include "../../unmapped/IWorldRegistriesProvider.h"
#include <functional>
#include "../../unmapped/FilterInputs.h"
#include <memory>


class FilterTest {

public:
    class Definition;

    virtual void finalizeParsedValue(IWorldRegistriesProvider &);
    virtual void _serializeDomain()const;
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    ~FilterTest();
    void _testValuesWithOperator(std::string const&, std::string const&)const;
    void serialize()const;
    void _testValuesWithOperator(float, float)const;
    FilterTest();
    void _testValuesWithOperator(bool, bool)const;
    void getSubject()const;
    void _testValuesWithOperator(int, int)const;
    class Definition {

    public:
        ~Definition();
        Definition(std::string const&, std::string const&, FilterParamDefinition const*, FilterParamDefinition const*, FilterParamDefinition const*, FilterParamDefinition const*, std::function<std::shared_ptr<FilterTest> (void)>);
        Definition(FilterTest::Definition &&);
    };
};
