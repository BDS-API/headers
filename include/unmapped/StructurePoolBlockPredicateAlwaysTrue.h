#pragma once

#include "IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateAlwaysTrue : public IStructurePoolBlockPredicate {

public:
    virtual ~StructurePoolBlockPredicateAlwaysTrue(); // _ZN37StructurePoolBlockPredicateAlwaysTrueD2Ev
    virtual void __fake_function0(); // fake
    virtual void test(Block const&, Random &)const; // _ZNK37StructurePoolBlockPredicateAlwaysTrue4testERK5BlockR6Random
    StructurePoolBlockPredicateAlwaysTrue(); // _ZN37StructurePoolBlockPredicateAlwaysTrueC2Ev
};
