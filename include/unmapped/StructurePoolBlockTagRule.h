#pragma once

#include <memory>
#include <string>


class StructurePoolBlockTagRule {

public:
    ~StructurePoolBlockTagRule();
    StructurePoolBlockTagRule(std::unique_ptr<IStructurePoolBlockTagPredicate> &&, std::string, std::allocator<char>);
    bool processRule(Block const&, CompoundTag &)const;
};
