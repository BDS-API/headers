#pragma once

#include "IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateStateMatchRandom : IStructurePoolBlockPredicate {

public:
    virtual void test(Block const&, Random &)const;
    ~StructurePoolBlockPredicateStateMatchRandom();
    StructurePoolBlockPredicateStateMatchRandom(Block const&, float);
};
