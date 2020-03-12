#pragma once

#include "../bedrock/util/Random.h"
#include "Block.h"
#include "IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateAlwaysTrue : IStructurePoolBlockPredicate {

public:
    virtual void test(Block const&, Random &)const;
    ~StructurePoolBlockPredicateAlwaysTrue();
    StructurePoolBlockPredicateAlwaysTrue();
};
