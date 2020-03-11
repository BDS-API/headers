#pragma once

#include "./Block.h"
#include "../bedrock/util/Random.h"
#include "./IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateStateMatch : IStructurePoolBlockPredicate {

public:
    virtual ~StructurePoolBlockPredicateStateMatch();
    virtual void test(Block const&, Random &)const;

    StructurePoolBlockPredicateStateMatch(Block const&);
};
