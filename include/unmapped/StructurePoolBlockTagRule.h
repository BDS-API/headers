#pragma once

#include <memory>
#include "./IStructurePoolBlockTagPredicate.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "./Block.h"
#include <string>


class StructurePoolBlockTagRule {

public:

    ~StructurePoolBlockTagRule();
    StructurePoolBlockTagRule(std::unique_ptr<IStructurePoolBlockTagPredicate, std::default_delete<IStructurePoolBlockTagPredicate>> &&, std::string, std::allocator<char>);
    bool processRule(Block const&, CompoundTag &)const;
};
