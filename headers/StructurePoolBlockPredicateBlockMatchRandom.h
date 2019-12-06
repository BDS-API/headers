#pragma once

class StructurePoolBlockPredicateBlockMatchRandom : IStructurePoolBlockPredicate {

public:
    virtual ~StructurePoolBlockPredicateBlockMatchRandom();
    virtual void test(Block const&, Random &)const;

    void StructurePoolBlockPredicateBlockMatchRandom(Block const&, float);
};
