#pragma once

#include "IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateBlockMatch : IStructurePoolBlockPredicate {

public:
    ~StructurePoolBlockPredicateBlockMatch();
    virtual void test(Block const&, Random &)const;
    StructurePoolBlockPredicateBlockMatch(Block const&);
};
