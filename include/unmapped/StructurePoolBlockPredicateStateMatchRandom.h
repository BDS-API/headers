#pragma once

#include "../bedrock/util/Random"


class StructurePoolBlockPredicateStateMatchRandom : IStructurePoolBlockPredicate {

public:
    virtual StructurePoolBlockPredicateStateMatchRandom::~StructurePoolBlockPredicateStateMatchRandom()
    virtual void test(Block const&, Random &)const;

    StructurePoolBlockPredicateStateMatchRandom(Block const&, float);
};
