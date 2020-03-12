#pragma once

#include <string>
#include <memory>
#include <functional>


class FilterTest {

public:
    class Definition;

    virtual void _serializeDomain()const;
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    ~FilterTest();
    virtual void finalizeParsedValue(IWorldRegistriesProvider &);
    void _testValuesWithOperator(bool, bool)const;
    void getSubject()const;
    void serialize()const;
    FilterTest();
    void _testValuesWithOperator(std::string const&, std::string const&)const;
    void _testValuesWithOperator(float, float)const;
    void _testValuesWithOperator(int, int)const;
    class Definition {

    public:
        Definition(std::string const&, std::string const&, FilterParamDefinition const*, FilterParamDefinition const*, FilterParamDefinition const*, FilterParamDefinition const*, std::function<std::shared_ptr<FilterTest> (void)>);
        ~Definition();
        Definition(FilterTest::Definition &&);
    };
};
