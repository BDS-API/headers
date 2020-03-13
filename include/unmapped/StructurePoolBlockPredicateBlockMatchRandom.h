#pragma once

#include "IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateBlockMatchRandom : IStructurePoolBlockPredicate {

public:
    ~StructurePoolBlockPredicateBlockMatchRandom(); // _ZN43StructurePoolBlockPredicateBlockMatchRandomD2Ev
    virtual void test(Block const&, Random &)const; // _ZNK43StructurePoolBlockPredicateBlockMatchRandom4testERK5BlockR6Random
    StructurePoolBlockPredicateBlockMatchRandom(Block const&, float); // _ZN43StructurePoolBlockPredicateBlockMatchRandomC2ERK5Blockf
};
