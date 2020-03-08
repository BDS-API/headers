#pragma once



class StructurePoolActorPredicateAlwaysTrue : IStructurePoolActorPredicate {

public:
    virtual StructurePoolActorPredicateAlwaysTrue::~StructurePoolActorPredicateAlwaysTrue()
    virtual void test(std::string const&)const;

    StructurePoolActorPredicateAlwaysTrue(void);
};
