#pragma once

#include "../bedrock/util/Random.h"
#include "Block.h"
#include "IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateStateMatchRandom : IStructurePoolBlockPredicate {

public:
    ~StructurePoolBlockPredicateStateMatchRandom();
    virtual void test(Block const&, Random &)const;
    StructurePoolBlockPredicateStateMatchRandom(Block const&, float);
};
