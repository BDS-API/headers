#pragma once

#include "../Actor"
#include "../../../unmapped/VariantParameterList"
#include "../../../unmapped/FilterGroup"
#include "../../../unmapped/FilterInput"
#include "../../../json/Value"


class ActorFilterGroup : FilterGroup {

public:
    virtual ActorFilterGroup::~ActorFilterGroup()
    virtual void _createSubgroup(FilterGroup::CollectionType)const;
    virtual void _handleUnknownMember(std::string const&, Json::Value const&);

    ActorFilterGroup(ActorFilterGroup&&);
    ActorFilterGroup(ActorFilterGroup const&);
    ActorFilterGroup(FilterGroup::CollectionType);
    void initialize();
    void evaluate(Actor const&, VariantParameterList const&)const;
    void _addLegacyFilter(std::string const&, ActorFilterGroup::LegacyMapping const&, FilterInput const&);
    void _processLegacyMember(std::string const&, Json::Value const&, ActorFilterGroup::LegacyMapping const&);
    void _processLegacyArray(std::string const&, Json::Value const&, ActorFilterGroup::LegacyMapping const&);
};
