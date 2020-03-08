#pragma once

#include "../bedrock/nbt/CompoundTag"


class StructurePoolBlockTagRule {

public:

    StructurePoolBlockTagRule(std::unique_ptr<IStructurePoolBlockTagPredicate, std::default_delete<IStructurePoolBlockTagPredicate>> &&, std::string, std::allocator<char>);
    bool processRule(Block const&, CompoundTag &)const;
};
