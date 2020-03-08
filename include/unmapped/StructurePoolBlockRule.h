#pragma once

#include "../bedrock/util/Random"


class StructurePoolBlockRule {

public:

    StructurePoolBlockRule(std::unique_ptr<IStructurePoolBlockPredicate, std::default_delete<IStructurePoolBlockPredicate>> &&, std::unique_ptr<IStructurePoolBlockPredicate, std::default_delete<IStructurePoolBlockPredicate>> &, Block const*);
    bool processRule(Block const&, Block const&, Random &, Block const*&)const;
};
