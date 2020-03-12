#pragma once

#include "../bedrock/util/Random.h"
#include "Block.h"
#include "IStructurePoolBlockPredicate.h"
#include <memory>


class StructurePoolBlockRule {

public:
    bool processRule(Block const&, Block const&, Random &, Block const*&)const;
    ~StructurePoolBlockRule();
    StructurePoolBlockRule(std::unique_ptr<IStructurePoolBlockPredicate> &&, std::unique_ptr<IStructurePoolBlockPredicate> &, Block const*);
};
