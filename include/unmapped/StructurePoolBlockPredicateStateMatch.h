#pragma once



class StructurePoolBlockPredicateStateMatch : IStructurePoolBlockPredicate {

public:
    virtual StructurePoolBlockPredicateStateMatch::~StructurePoolBlockPredicateStateMatch();
    virtual void test(Block const&, Random &)const;

    StructurePoolBlockPredicateStateMatch(Block const&);
};
