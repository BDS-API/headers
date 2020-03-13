#pragma once

#include <memory>


class StructurePoolBlockRule {

public:
    ~StructurePoolBlockRule(); // _ZN22StructurePoolBlockRuleD2Ev
    StructurePoolBlockRule(std::unique_ptr<IStructurePoolBlockPredicate> &&, std::unique_ptr<IStructurePoolBlockPredicate> &, Block const*); // _ZN22StructurePoolBlockRuleC2EOSt10unique_ptrI28IStructurePoolBlockPredicateSt14default_deleteIS1_EES5_PK5Block
    bool processRule(Block const&, Block const&, Random &, Block const*&)const; // _ZNK22StructurePoolBlockRule11processRuleERK5BlockS2_R6RandomRPS1_
};
