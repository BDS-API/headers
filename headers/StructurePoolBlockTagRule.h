#pragma once

class StructurePoolBlockTagRule {

public:

    void StructurePoolBlockTagRule(std::unique_ptr<IStructurePoolBlockTagPredicate, std::default_delete<IStructurePoolBlockTagPredicate>> &&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<char>);
    void processRule(Block const&, CompoundTag &)const;
};
