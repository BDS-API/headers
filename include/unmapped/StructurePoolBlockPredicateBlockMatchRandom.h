#pragma once

#include "../bedrock/util/Random"


class StructurePoolBlockPredicateBlockMatchRandom : IStructurePoolBlockPredicate {

public:
    StructurePoolBlockPredicateBlockMatchRandom::~StructurePoolBlockPredicateBlockMatchRandom()
    virtual void test(Block const&, Random &)const;

    StructurePoolBlockPredicateBlockMatchRandom(Block const&, float);
};
