#pragma once

class StructurePoolBlockPredicateBlockMatch : IStructurePoolBlockPredicate {

public:
    virtual ~StructurePoolBlockPredicateBlockMatch();
    virtual void test(Block const&, Random &)const;

    void StructurePoolBlockPredicateBlockMatch(Block const&);
};
