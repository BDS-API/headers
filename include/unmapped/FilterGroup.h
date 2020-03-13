#pragma once

#include <string>
#include <array>
#include "../bedrock/test/FilterTest.h"


class FilterGroup {

public:
    ~FilterGroup(); // _ZN11FilterGroupD2Ev
    virtual void _setupContext(FilterTest const&, FilterContext &)const; // _ZNK11FilterGroup13_setupContextERK10FilterTestR13FilterContext
    virtual void _handleUnknownMember(std::string const&, Json::Value const&); // _ZN11FilterGroup20_handleUnknownMemberERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueE
    FilterGroup(FilterGroup const&); // _ZN11FilterGroupC2ERKS_
//  FilterGroup(FilterGroup::CollectionType); //TODO: incomplete function definition // _ZN11FilterGroupC2ENS_14CollectionTypeE
    void evaluate(std::array<FilterContext, 7ul> &)const; // _ZNK11FilterGroup8evaluateERSt5arrayI13FilterContextLm7EE
    void _evaluateMember(FilterTest const&, std::array<FilterContext, 7ul> &)const; // _ZNK11FilterGroup15_evaluateMemberERK10FilterTestRSt5arrayI13FilterContextLm7EE
    void parse(Json::Value const&); // _ZN11FilterGroup5parseERKN4Json5ValueE
    void _parseObject(std::string const&, Json::Value const&); // _ZN11FilterGroup12_parseObjectERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueE
    void _parseTest(Json::Value const&); // _ZN11FilterGroup10_parseTestERKN4Json5ValueE
    void _parseMember(std::string const&, Json::Value const&); // _ZN11FilterGroup12_parseMemberERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueE
    void _parseFilterInputs(Json::Value const&, FilterTest::Definition const&, FilterInputs &); // _ZN11FilterGroup18_parseFilterInputsERKN4Json5ValueERKN10FilterTest10DefinitionER12FilterInputs
    void addFilterTest(FilterTest::Definition const&, FilterInputs const&); // _ZN11FilterGroup13addFilterTestERKN10FilterTest10DefinitionERK12FilterInputs
    void _parseFilterParam(std::string const&, std::string const&, Json::Value const&, FilterParamDefinition const&, FilterInput &); // _ZN11FilterGroup17_parseFilterParamERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_RKN4Json5ValueERK21FilterParamDefinitionR11FilterInput
    void addFilterTest(std::string const&, FilterInputs const&); // _ZN11FilterGroup13addFilterTestERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK12FilterInputs
    void serialize(Json::Value &)const; // _ZNK11FilterGroup9serializeERN4Json5ValueE
    void empty(); // _ZN11FilterGroup5emptyEv
    void getMembers()const; // _ZNK11FilterGroup10getMembersEv
    void getChildren()const; // _ZNK11FilterGroup11getChildrenEv
};
