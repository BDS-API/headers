#pragma once

#include "IStructurePoolBlockTagPredicate.h"


class StructurePoolBlockTagPredicateBlockTagMatch : IStructurePoolBlockTagPredicate {

public:
    ~StructurePoolBlockTagPredicateBlockTagMatch(); // _ZN43StructurePoolBlockTagPredicateBlockTagMatchD2Ev
    virtual void test(Block const&, CompoundTag const&)const; // _ZNK43StructurePoolBlockTagPredicateBlockTagMatch4testERK5BlockRK11CompoundTag
    StructurePoolBlockTagPredicateBlockTagMatch(Block const&, CompoundTag const&); // _ZN43StructurePoolBlockTagPredicateBlockTagMatchC2ERK5BlockRK11CompoundTag
};
