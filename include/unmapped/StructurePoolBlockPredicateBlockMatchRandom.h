#pragma once

#include "../bedrock/util/Random.h"
#include "Block.h"
#include "IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateBlockMatchRandom : IStructurePoolBlockPredicate {

public:
    ~StructurePoolBlockPredicateBlockMatchRandom();
    virtual void test(Block const&, Random &)const;
    StructurePoolBlockPredicateBlockMatchRandom(Block const&, float);
};
