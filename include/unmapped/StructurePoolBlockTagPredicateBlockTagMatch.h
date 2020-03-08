#pragma once

#include "../bedrock/nbt/CompoundTag"


class StructurePoolBlockTagPredicateBlockTagMatch : IStructurePoolBlockTagPredicate {

public:
    virtual StructurePoolBlockTagPredicateBlockTagMatch::~StructurePoolBlockTagPredicateBlockTagMatch()
    virtual void test(Block const&, CompoundTag const&)const;

    StructurePoolBlockTagPredicateBlockTagMatch(Block const&, CompoundTag const&);
};
