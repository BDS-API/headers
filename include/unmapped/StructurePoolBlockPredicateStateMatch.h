#pragma once

#include "../bedrock/util/Random"


class StructurePoolBlockPredicateStateMatch : IStructurePoolBlockPredicate {

public:
    virtual StructurePoolBlockPredicateStateMatch::~StructurePoolBlockPredicateStateMatch()
    virtual void test(Block const&, Random &)const;

    StructurePoolBlockPredicateStateMatch(Block const&);
};
