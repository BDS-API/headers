#pragma once

class StructurePoolBlockPredicateStateMatch : IStructurePoolBlockPredicate {

public:
    virtual ~StructurePoolBlockPredicateStateMatch();
    virtual void test(Block const&, Random &)const;

    void StructurePoolBlockPredicateStateMatch(Block const&);
};
