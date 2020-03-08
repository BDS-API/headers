#pragma once



class StructurePoolBlockPredicateAlwaysTrue : IStructurePoolBlockPredicate {

public:
    virtual StructurePoolBlockPredicateAlwaysTrue::~StructurePoolBlockPredicateAlwaysTrue();
    virtual void test(Block const&, Random &)const;

    StructurePoolBlockPredicateAlwaysTrue(void);
};
