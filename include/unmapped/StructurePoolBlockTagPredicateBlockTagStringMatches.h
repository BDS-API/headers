#pragma once

#include <string>
#include "IStructurePoolBlockTagPredicate.h"


class StructurePoolBlockTagPredicateBlockTagStringMatches : public IStructurePoolBlockTagPredicate {

public:
    virtual ~StructurePoolBlockTagPredicateBlockTagStringMatches(); // _ZN51StructurePoolBlockTagPredicateBlockTagStringMatchesD2Ev
    virtual void __fake_function0(); // fake
    virtual void test(Block const&, CompoundTag const&)const; // _ZNK51StructurePoolBlockTagPredicateBlockTagStringMatches4testERK5BlockRK11CompoundTag
    StructurePoolBlockTagPredicateBlockTagStringMatches(Block const&, std::string, std::string); // _ZN51StructurePoolBlockTagPredicateBlockTagStringMatchesC2ERK5BlockNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_
};
