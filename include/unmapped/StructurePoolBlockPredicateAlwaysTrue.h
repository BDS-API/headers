#pragma once

#include "./Block.h"
#include "../bedrock/util/Random.h"
#include "./IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateAlwaysTrue : IStructurePoolBlockPredicate {

public:
    virtual ~StructurePoolBlockPredicateAlwaysTrue();
    virtual void test(Block const&, Random &)const;

    StructurePoolBlockPredicateAlwaysTrue();
};
