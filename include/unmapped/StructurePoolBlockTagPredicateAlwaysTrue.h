#pragma once

#include "IStructurePoolBlockTagPredicate.h"


class StructurePoolBlockTagPredicateAlwaysTrue : IStructurePoolBlockTagPredicate {

public:
    virtual void test(Block const&, CompoundTag const&)const;
    ~StructurePoolBlockTagPredicateAlwaysTrue();
    StructurePoolBlockTagPredicateAlwaysTrue();
};
