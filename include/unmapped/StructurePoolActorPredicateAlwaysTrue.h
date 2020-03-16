#pragma once

#include "IStructurePoolActorPredicate.h"
#include <string>


class StructurePoolActorPredicateAlwaysTrue : public IStructurePoolActorPredicate {

public:
    virtual ~StructurePoolActorPredicateAlwaysTrue(); // _ZN37StructurePoolActorPredicateAlwaysTrueD2Ev
    virtual void __fake_function0(); // fake
    virtual void test(std::string const&)const; // _ZNK37StructurePoolActorPredicateAlwaysTrue4testERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    StructurePoolActorPredicateAlwaysTrue(); // _ZN37StructurePoolActorPredicateAlwaysTrueC2Ev
};
