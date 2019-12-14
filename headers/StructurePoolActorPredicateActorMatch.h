#pragma once

class StructurePoolActorPredicateActorMatch : IStructurePoolActorPredicate {

public:
    virtual ~StructurePoolActorPredicateActorMatch();
    virtual void test(std::string const&)const;

    void StructurePoolActorPredicateActorMatch(std::string);
};
