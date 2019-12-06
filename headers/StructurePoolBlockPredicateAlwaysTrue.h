#pragma once

class StructurePoolBlockPredicateAlwaysTrue : IStructurePoolBlockPredicate {

public:
    virtual ~StructurePoolBlockPredicateAlwaysTrue();
    virtual void test(Block const&, Random &)const;

    void StructurePoolBlockPredicateAlwaysTrue(void);
};
