#pragma once

#include "IStructurePoolBlockTagPredicate.h"
#include "Block.h"
#include "../bedrock/nbt/CompoundTag.h"


class StructurePoolBlockTagPredicateAlwaysTrue : IStructurePoolBlockTagPredicate {

public:
    virtual void test(Block const&, CompoundTag const&)const;
    ~StructurePoolBlockTagPredicateAlwaysTrue();
    StructurePoolBlockTagPredicateAlwaysTrue();
};
