#pragma once

#include "../bedrock/nbt/CompoundTag"


class StructurePoolBlockTagPredicateBlockTagMatch : IStructurePoolBlockTagPredicate {

public:
    StructurePoolBlockTagPredicateBlockTagMatch::~StructurePoolBlockTagPredicateBlockTagMatch()
    virtual void test(Block const&, CompoundTag const&)const;

    StructurePoolBlockTagPredicateBlockTagMatch(Block const&, CompoundTag const&);
};
