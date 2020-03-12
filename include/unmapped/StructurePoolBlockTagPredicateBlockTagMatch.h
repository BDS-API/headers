#pragma once

#include "IStructurePoolBlockTagPredicate.h"


class StructurePoolBlockTagPredicateBlockTagMatch : IStructurePoolBlockTagPredicate {

public:
    ~StructurePoolBlockTagPredicateBlockTagMatch();
    virtual void test(Block const&, CompoundTag const&)const;
    StructurePoolBlockTagPredicateBlockTagMatch(Block const&, CompoundTag const&);
};
