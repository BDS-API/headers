#pragma once

#include <string>
#include "../../../unmapped/FilterGroup.h"


class ActorFilterGroup : FilterGroup {

public:
    class LegacyMapping;

//  virtual void _createSubgroup(FilterGroup::CollectionType)const; //TODO: incomplete function definition
    ~ActorFilterGroup();
    virtual void _handleUnknownMember(std::string const&, Json::Value const&);
    void evaluate(Actor const&, VariantParameterList const&)const;
    ActorFilterGroup(ActorFilterGroup const&);
//  ActorFilterGroup(FilterGroup::CollectionType); //TODO: incomplete function definition
    void _addLegacyFilter(std::string const&, ActorFilterGroup::LegacyMapping const&, FilterInput const&);
    ActorFilterGroup(ActorFilterGroup &&);
    void _processLegacyMember(std::string const&, Json::Value const&, ActorFilterGroup::LegacyMapping const&);
    void _processLegacyArray(std::string const&, Json::Value const&, ActorFilterGroup::LegacyMapping const&);
    void initialize();
    class LegacyMapping {

    public:
//      LegacyMapping(FilterGroup::CollectionType, FilterTest::Definition const&, FilterSubject, FilterOperator, ActorFilterGroup::Processing); //TODO: incomplete function definition
    };
};
