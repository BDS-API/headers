#pragma once

#include "IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateAlwaysTrue : IStructurePoolBlockPredicate {

public:
    ~StructurePoolBlockPredicateAlwaysTrue(); // _ZN37StructurePoolBlockPredicateAlwaysTrueD2Ev
    virtual void test(Block const&, Random &)const; // _ZNK37StructurePoolBlockPredicateAlwaysTrue4testERK5BlockR6Random
    StructurePoolBlockPredicateAlwaysTrue(); // _ZN37StructurePoolBlockPredicateAlwaysTrueC2Ev
};
