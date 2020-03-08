#pragma once

#include "../bedrock/util/Random"


class StructurePoolBlockPredicateBlockMatchRandom : IStructurePoolBlockPredicate {

public:
    virtual StructurePoolBlockPredicateBlockMatchRandom::~StructurePoolBlockPredicateBlockMatchRandom()
    virtual void test(Block const&, Random &)const;

    StructurePoolBlockPredicateBlockMatchRandom(Block const&, float);
};
