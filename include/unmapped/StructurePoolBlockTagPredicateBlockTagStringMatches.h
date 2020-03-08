#pragma once

#include "../bedrock/nbt/CompoundTag"


class StructurePoolBlockTagPredicateBlockTagStringMatches : IStructurePoolBlockTagPredicate {

public:
    virtual StructurePoolBlockTagPredicateBlockTagStringMatches::~StructurePoolBlockTagPredicateBlockTagStringMatches()
    virtual void test(Block const&, CompoundTag const&)const;

    StructurePoolBlockTagPredicateBlockTagStringMatches(Block const&, std::string, std::string);
};
