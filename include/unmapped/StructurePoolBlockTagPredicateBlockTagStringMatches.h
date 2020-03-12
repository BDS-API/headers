#pragma once

#include "IStructurePoolBlockTagPredicate.h"
#include "Block.h"
#include <string>
#include "../bedrock/nbt/CompoundTag.h"


class StructurePoolBlockTagPredicateBlockTagStringMatches : IStructurePoolBlockTagPredicate {

public:
    ~StructurePoolBlockTagPredicateBlockTagStringMatches();
    virtual void test(Block const&, CompoundTag const&)const;
    StructurePoolBlockTagPredicateBlockTagStringMatches(Block const&, std::string, std::string);
};
