#pragma once

#include <string>
#include "../../../unmapped/FilterGroup.h"
#include "../../test/FilterTest.h"


class ActorFilterGroup : FilterGroup {

public:
    class LegacyMapping;

    ~ActorFilterGroup(); // _ZN16ActorFilterGroupD2Ev
//  virtual void _createSubgroup(FilterGroup::CollectionType)const; //TODO: incomplete function definition // _ZNK16ActorFilterGroup15_createSubgroupEN11FilterGroup14CollectionTypeE
    virtual void _handleUnknownMember(std::string const&, Json::Value const&); // _ZN16ActorFilterGroup20_handleUnknownMemberERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueE
    ActorFilterGroup(ActorFilterGroup &&); // _ZN16ActorFilterGroupC2EOS_
    ActorFilterGroup(ActorFilterGroup const&); // _ZN16ActorFilterGroupC2ERKS_
//  ActorFilterGroup(FilterGroup::CollectionType); //TODO: incomplete function definition // _ZN16ActorFilterGroupC2EN11FilterGroup14CollectionTypeE
    void initialize(); // _ZN16ActorFilterGroup10initializeEv
    void evaluate(Actor const&, VariantParameterList const&)const; // _ZNK16ActorFilterGroup8evaluateERK5ActorRK20VariantParameterList
    void _addLegacyFilter(std::string const&, ActorFilterGroup::LegacyMapping const&, FilterInput const&); // _ZN16ActorFilterGroup16_addLegacyFilterERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13LegacyMappingERK11FilterInput
    void _processLegacyMember(std::string const&, Json::Value const&, ActorFilterGroup::LegacyMapping const&); // _ZN16ActorFilterGroup20_processLegacyMemberERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueERKNS_13LegacyMappingE
    void _processLegacyArray(std::string const&, Json::Value const&, ActorFilterGroup::LegacyMapping const&); // _ZN16ActorFilterGroup19_processLegacyArrayERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueERKNS_13LegacyMappingE
    class LegacyMapping {

    public:
//      LegacyMapping(FilterGroup::CollectionType, FilterTest::Definition const&, FilterSubject, FilterOperator, ActorFilterGroup::Processing); //TODO: incomplete function definition // _ZN16ActorFilterGroup13LegacyMappingC2EN11FilterGroup14CollectionTypeERKN10FilterTest10DefinitionE13FilterSubject14FilterOperatorNS_10ProcessingE
    };
};
