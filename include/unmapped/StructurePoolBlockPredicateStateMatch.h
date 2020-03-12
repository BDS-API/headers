#pragma once

#include "../bedrock/util/Random.h"
#include "Block.h"
#include "IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateStateMatch : IStructurePoolBlockPredicate {

public:
    virtual void test(Block const&, Random &)const;
    ~StructurePoolBlockPredicateStateMatch();
    StructurePoolBlockPredicateStateMatch(Block const&);
};
