#pragma once

#include "../bedrock/util/Random.h"
#include "Block.h"
#include "IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateBlockMatch : IStructurePoolBlockPredicate {

public:
    virtual void test(Block const&, Random &)const;
    ~StructurePoolBlockPredicateBlockMatch();
    StructurePoolBlockPredicateBlockMatch(Block const&);
};
