#pragma once

#include "./Block.h"
#include "../bedrock/util/Random.h"
#include "./IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateBlockMatch : IStructurePoolBlockPredicate {

public:
    virtual ~StructurePoolBlockPredicateBlockMatch();
    virtual void test(Block const&, Random &)const;

    StructurePoolBlockPredicateBlockMatch(Block const&);
};
