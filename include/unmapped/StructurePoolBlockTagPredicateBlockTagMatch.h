#pragma once

#include "IStructurePoolBlockTagPredicate.h"
#include "Block.h"
#include "../bedrock/nbt/CompoundTag.h"


class StructurePoolBlockTagPredicateBlockTagMatch : IStructurePoolBlockTagPredicate {

public:
    virtual void test(Block const&, CompoundTag const&)const;
    ~StructurePoolBlockTagPredicateBlockTagMatch();
    StructurePoolBlockTagPredicateBlockTagMatch(Block const&, CompoundTag const&);
};
