#pragma once

class StructurePoolActorPredicateAlwaysTrue : IStructurePoolActorPredicate {

public:
    virtual ~StructurePoolActorPredicateAlwaysTrue();
    virtual void test(std::string const&)const;

    void StructurePoolActorPredicateAlwaysTrue(void);
};
