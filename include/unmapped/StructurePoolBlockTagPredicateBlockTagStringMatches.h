#pragma once

#include <string>
#include "IStructurePoolBlockTagPredicate.h"


class StructurePoolBlockTagPredicateBlockTagStringMatches : IStructurePoolBlockTagPredicate {

public:
    ~StructurePoolBlockTagPredicateBlockTagStringMatches();
    virtual void test(Block const&, CompoundTag const&)const;
    StructurePoolBlockTagPredicateBlockTagStringMatches(Block const&, std::string, std::string);
};
