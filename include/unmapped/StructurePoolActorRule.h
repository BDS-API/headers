#pragma once

#include <string>
#include <memory>


class StructurePoolActorRule {

public:
    ~StructurePoolActorRule(); // _ZN22StructurePoolActorRuleD2Ev
    StructurePoolActorRule(std::unique_ptr<IStructurePoolActorPredicate> &&, std::string); // _ZN22StructurePoolActorRuleC2EOSt10unique_ptrI28IStructurePoolActorPredicateSt14default_deleteIS1_EENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool processRule(std::string const&, std::string &)const; // _ZNK22StructurePoolActorRule11processRuleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERS5_
};
