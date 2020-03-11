#pragma once

#include "./Block.h"
#include "../bedrock/util/Random.h"
#include "./IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateBlockMatchRandom : IStructurePoolBlockPredicate {

public:
    virtual ~StructurePoolBlockPredicateBlockMatchRandom();
    virtual void test(Block const&, Random &)const;

    StructurePoolBlockPredicateBlockMatchRandom(Block const&, float);
};
