#pragma once

#include "./Block.h"
#include "./IStructurePoolBlockTagPredicate.h"
#include "../bedrock/nbt/CompoundTag.h"
#include <string>


class StructurePoolBlockTagPredicateBlockTagStringMatches : IStructurePoolBlockTagPredicate {

public:
    virtual ~StructurePoolBlockTagPredicateBlockTagStringMatches();
    virtual void test(Block const&, CompoundTag const&)const;

    StructurePoolBlockTagPredicateBlockTagStringMatches(Block const&, std::string, std::string);
};
