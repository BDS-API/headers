#pragma once

class ActorFilterGroup : FilterGroup {

public:
    virtual ~ActorFilterGroup();
    virtual void _createSubgroup(FilterGroup::CollectionType)const;
    virtual void _handleUnknownMember(std::string const&, Json::Value const&);

    void ActorFilterGroup(ActorFilterGroup&&);
    void ActorFilterGroup(FilterGroup::CollectionType);
    void ActorFilterGroup(ActorFilterGroup const&);
    void initialize(void);
    void evaluate(Actor const&, VariantParameterList const&)const;
    void _addLegacyFilter(std::string const&, ActorFilterGroup::LegacyMapping const&, FilterInput const&);
    void _processLegacyMember(std::string const&, Json::Value const&, ActorFilterGroup::LegacyMapping const&);
    void _processLegacyArray(std::string const&, Json::Value const&, ActorFilterGroup::LegacyMapping const&);
};
