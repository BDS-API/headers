#pragma once

class StructurePoolBlockPredicateStateMatchRandom : IStructurePoolBlockPredicate {

public:
    virtual ~StructurePoolBlockPredicateStateMatchRandom();
    virtual void test(Block const&, Random &)const;

    void StructurePoolBlockPredicateStateMatchRandom(Block const&, float);
};
