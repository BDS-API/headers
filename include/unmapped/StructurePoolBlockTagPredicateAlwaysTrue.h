#pragma once

#include "../bedrock/nbt/CompoundTag"


class StructurePoolBlockTagPredicateAlwaysTrue : IStructurePoolBlockTagPredicate {

public:
    StructurePoolBlockTagPredicateAlwaysTrue::~StructurePoolBlockTagPredicateAlwaysTrue()
    virtual void test(Block const&, CompoundTag const&)const;

    StructurePoolBlockTagPredicateAlwaysTrue(void);
};
