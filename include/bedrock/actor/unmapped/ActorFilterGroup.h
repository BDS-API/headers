#pragma once

#include <string>
#include "../Actor.h"
#include "../../../unmapped/FilterInput.h"
#include "../../../unmapped/FilterGroup.h"
#include "../../test/FilterTest.h"
#include "../../../unmapped/VariantParameterList.h"
#include "../../../json/Value.h"


class ActorFilterGroup : FilterGroup {

public:
    class LegacyMapping;

    virtual void _handleUnknownMember(std::string const&, Json::Value const&);
    ~ActorFilterGroup();
//  virtual void _createSubgroup(FilterGroup::CollectionType)const; //TODO: incomplete function definition
    void _addLegacyFilter(std::string const&, ActorFilterGroup::LegacyMapping const&, FilterInput const&);
    void initialize();
    void _processLegacyArray(std::string const&, Json::Value const&, ActorFilterGroup::LegacyMapping const&);
//  ActorFilterGroup(FilterGroup::CollectionType); //TODO: incomplete function definition
    ActorFilterGroup(ActorFilterGroup &&);
    ActorFilterGroup(ActorFilterGroup const&);
    void _processLegacyMember(std::string const&, Json::Value const&, ActorFilterGroup::LegacyMapping const&);
    void evaluate(Actor const&, VariantParameterList const&)const;
    class LegacyMapping {

    public:
//      LegacyMapping(FilterGroup::CollectionType, FilterTest::Definition const&, FilterSubject, FilterOperator, ActorFilterGroup::Processing); //TODO: incomplete function definition
    };
};
