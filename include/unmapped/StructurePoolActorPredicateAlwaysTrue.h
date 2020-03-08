#pragma once



class StructurePoolActorPredicateAlwaysTrue : IStructurePoolActorPredicate {

public:
    StructurePoolActorPredicateAlwaysTrue::~StructurePoolActorPredicateAlwaysTrue()
    virtual void test(std::string const&)const;

    StructurePoolActorPredicateAlwaysTrue(void);
};
