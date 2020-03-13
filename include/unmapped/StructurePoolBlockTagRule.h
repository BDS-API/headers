#pragma once

#include <string>
#include <memory>


class StructurePoolBlockTagRule {

public:
    ~StructurePoolBlockTagRule(); // _ZN25StructurePoolBlockTagRuleD2Ev
    StructurePoolBlockTagRule(std::unique_ptr<IStructurePoolBlockTagPredicate> &&, std::string, std::allocator<char>); // _ZN25StructurePoolBlockTagRuleC2EOSt10unique_ptrI31IStructurePoolBlockTagPredicateSt14default_deleteIS1_EENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESB_
    bool processRule(Block const&, CompoundTag &)const; // _ZNK25StructurePoolBlockTagRule11processRuleERK5BlockR11CompoundTag
};
