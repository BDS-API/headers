#pragma once

#include "IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateBlockMatchRandom : IStructurePoolBlockPredicate {

public:
    ~StructurePoolBlockPredicateBlockMatchRandom();
    virtual void test(Block const&, Random &)const;
    StructurePoolBlockPredicateBlockMatchRandom(Block const&, float);
};
