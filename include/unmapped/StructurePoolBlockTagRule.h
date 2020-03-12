#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include <string>
#include "IStructurePoolBlockTagPredicate.h"
#include "Block.h"
#include <memory>


class StructurePoolBlockTagRule {

public:
    ~StructurePoolBlockTagRule();
    bool processRule(Block const&, CompoundTag &)const;
    StructurePoolBlockTagRule(std::unique_ptr<IStructurePoolBlockTagPredicate> &&, std::string, std::allocator<char>);
};
