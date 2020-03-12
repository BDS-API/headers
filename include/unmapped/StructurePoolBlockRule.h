#pragma once

#include <memory>


class StructurePoolBlockRule {

public:
    bool processRule(Block const&, Block const&, Random &, Block const*&)const;
    StructurePoolBlockRule(std::unique_ptr<IStructurePoolBlockPredicate> &&, std::unique_ptr<IStructurePoolBlockPredicate> &, Block const*);
    ~StructurePoolBlockRule();
};
