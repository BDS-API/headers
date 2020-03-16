#pragma once

#include "IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateStateMatchRandom : public IStructurePoolBlockPredicate {

public:
    virtual ~StructurePoolBlockPredicateStateMatchRandom(); // _ZN43StructurePoolBlockPredicateStateMatchRandomD2Ev
    virtual void __fake_function0(); // fake
    virtual void test(Block const&, Random &)const; // _ZNK43StructurePoolBlockPredicateStateMatchRandom4testERK5BlockR6Random
    StructurePoolBlockPredicateStateMatchRandom(Block const&, float); // _ZN43StructurePoolBlockPredicateStateMatchRandomC2ERK5Blockf
};
