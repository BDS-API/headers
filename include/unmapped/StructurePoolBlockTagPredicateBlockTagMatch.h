#pragma once

#include "./Block.h"
#include "./IStructurePoolBlockTagPredicate.h"
#include "../bedrock/nbt/CompoundTag.h"


class StructurePoolBlockTagPredicateBlockTagMatch : IStructurePoolBlockTagPredicate {

public:
    virtual ~StructurePoolBlockTagPredicateBlockTagMatch();
    virtual void test(Block const&, CompoundTag const&)const;

    StructurePoolBlockTagPredicateBlockTagMatch(Block const&, CompoundTag const&);
};
