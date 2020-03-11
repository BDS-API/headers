#pragma once

#include "./Block.h"
#include "./IStructurePoolBlockTagPredicate.h"
#include "../bedrock/nbt/CompoundTag.h"


class StructurePoolBlockTagPredicateAlwaysTrue : IStructurePoolBlockTagPredicate {

public:
    virtual ~StructurePoolBlockTagPredicateAlwaysTrue();
    virtual void test(Block const&, CompoundTag const&)const;

    StructurePoolBlockTagPredicateAlwaysTrue();
};
