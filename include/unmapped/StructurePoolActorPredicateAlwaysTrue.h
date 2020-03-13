#pragma once

#include <string>
#include "IStructurePoolActorPredicate.h"


class StructurePoolActorPredicateAlwaysTrue : IStructurePoolActorPredicate {

public:
    ~StructurePoolActorPredicateAlwaysTrue(); // _ZN37StructurePoolActorPredicateAlwaysTrueD2Ev
    virtual void test(std::string const&)const; // _ZNK37StructurePoolActorPredicateAlwaysTrue4testERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    StructurePoolActorPredicateAlwaysTrue(); // _ZN37StructurePoolActorPredicateAlwaysTrueC2Ev
};
