#pragma once

class StructurePoolBlockRule {

public:

    void StructurePoolBlockRule(std::unique_ptr<IStructurePoolBlockPredicate, std::default_delete<IStructurePoolBlockPredicate>> &&, std::unique_ptr<IStructurePoolBlockPredicate, std::default_delete<IStructurePoolBlockPredicate>> &, Block const*);
    void processRule(Block const&, Block const&, Random &, Block const*&)const;
};
