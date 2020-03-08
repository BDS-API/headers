#pragma once



class StructurePoolActorPredicateActorMatch : IStructurePoolActorPredicate {

public:
    StructurePoolActorPredicateActorMatch::~StructurePoolActorPredicateActorMatch()
    virtual void test(std::string const&)const;

    StructurePoolActorPredicateActorMatch(std::string);
};
