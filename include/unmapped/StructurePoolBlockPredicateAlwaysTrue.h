#pragma once

#include "IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateAlwaysTrue : IStructurePoolBlockPredicate {

public:
    ~StructurePoolBlockPredicateAlwaysTrue();
    virtual void test(Block const&, Random &)const;
    StructurePoolBlockPredicateAlwaysTrue();
};
