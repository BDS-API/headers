#pragma once

#include "./Block.h"
#include "../bedrock/util/Random.h"
#include "./IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateStateMatchRandom : IStructurePoolBlockPredicate {

public:
    virtual ~StructurePoolBlockPredicateStateMatchRandom();
    virtual void test(Block const&, Random &)const;

    StructurePoolBlockPredicateStateMatchRandom(Block const&, float);
};
