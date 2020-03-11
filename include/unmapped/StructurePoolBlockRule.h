#pragma once

#include "./Block.h"
#include "../bedrock/util/Random.h"
#include <memory>
#include "./IStructurePoolBlockPredicate.h"


class StructurePoolBlockRule {

public:

    ~StructurePoolBlockRule();
    StructurePoolBlockRule(std::unique_ptr<IStructurePoolBlockPredicate, std::default_delete<IStructurePoolBlockPredicate>> &&, std::unique_ptr<IStructurePoolBlockPredicate, std::default_delete<IStructurePoolBlockPredicate>> &, Block const*);
    bool processRule(Block const&, Block const&, Random &, Block const*&)const;
};
