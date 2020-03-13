#pragma once

#include <string>
#include <memory>
#include <functional>


class FilterTest {

public:
    class Definition;

    ~FilterTest(); // _ZN10FilterTestD2Ev
    virtual void setup(FilterTest::Definition const&, FilterInputs const&); // _ZN10FilterTest5setupERKNS_10DefinitionERK12FilterInputs
    virtual void finalizeParsedValue(IWorldRegistriesProvider &); // _ZN10FilterTest19finalizeParsedValueER24IWorldRegistriesProvider
    virtual void _serializeDomain()const; // _ZNK10FilterTest16_serializeDomainEv
    FilterTest(); // _ZN10FilterTestC2Ev
    void serialize()const; // _ZNK10FilterTest9serializeEv
    void _testValuesWithOperator(bool, bool)const; // _ZNK10FilterTest23_testValuesWithOperatorEbb
    void _testValuesWithOperator(int, int)const; // _ZNK10FilterTest23_testValuesWithOperatorEii
    void _testValuesWithOperator(float, float)const; // _ZNK10FilterTest23_testValuesWithOperatorEff
    void _testValuesWithOperator(std::string const&, std::string const&)const; // _ZNK10FilterTest23_testValuesWithOperatorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void getSubject()const; // _ZNK10FilterTest10getSubjectEv
    class Definition {

    public:
        Definition(std::string const&, std::string const&, FilterParamDefinition const*, FilterParamDefinition const*, FilterParamDefinition const*, FilterParamDefinition const*, std::function<std::shared_ptr<FilterTest> (void)>); // _ZN10FilterTest10DefinitionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_PK21FilterParamDefinitionSB_SB_SB_St8functionIFSt10shared_ptrIS_EvEE
        ~Definition(); // _ZN10FilterTest10DefinitionD2Ev
        Definition(FilterTest::Definition &&); // _ZN10FilterTest10DefinitionC2EOS0_
    };
};
