#pragma once

#include <string>
#include "IStructurePoolActorPredicate.h"


class StructurePoolActorPredicateActorMatch : IStructurePoolActorPredicate {

public:
    ~StructurePoolActorPredicateActorMatch(); // _ZN37StructurePoolActorPredicateActorMatchD2Ev
    virtual void test(std::string const&)const; // _ZNK37StructurePoolActorPredicateActorMatch4testERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    StructurePoolActorPredicateActorMatch(std::string); // _ZN37StructurePoolActorPredicateActorMatchC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
