#pragma once

#include "../Actor.h"
#include "../../../unmapped/FilterInput.h"
#include "../../../unmapped/VariantParameterList.h"
#include "../../../json/Value.h"
#include "../../../unmapped/FilterGroup.h"
#include "./ActorFilterGroup.h"
#include "../../../unmapped/LegacyMapping.h"
#include <string>


class ActorFilterGroup : FilterGroup {

public:
    virtual ~ActorFilterGroup();
//  virtual void _createSubgroup(FilterGroup::CollectionType)const; //TODO: incomplete function definition
    virtual void _handleUnknownMember(std::string const&, Json::Value const&);

    ActorFilterGroup(ActorFilterGroup &&);
    ActorFilterGroup(ActorFilterGroup const&);
//  ActorFilterGroup(FilterGroup::CollectionType); //TODO: incomplete function definition
    void initialize();
    void evaluate(Actor const&, VariantParameterList const&)const;
    void _addLegacyFilter(std::string const&, ActorFilterGroup::LegacyMapping const&, FilterInput const&);
    void _processLegacyMember(std::string const&, Json::Value const&, ActorFilterGroup::LegacyMapping const&);
    void _processLegacyArray(std::string const&, Json::Value const&, ActorFilterGroup::LegacyMapping const&);
};
