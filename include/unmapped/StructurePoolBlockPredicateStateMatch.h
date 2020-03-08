#pragma once

#include "../bedrock/util/Random"


class StructurePoolBlockPredicateStateMatch : IStructurePoolBlockPredicate {

public:
    StructurePoolBlockPredicateStateMatch::~StructurePoolBlockPredicateStateMatch()
    virtual void test(Block const&, Random &)const;

    StructurePoolBlockPredicateStateMatch(Block const&);
};
