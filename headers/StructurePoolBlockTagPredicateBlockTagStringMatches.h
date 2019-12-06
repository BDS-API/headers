#pragma once

class StructurePoolBlockTagPredicateBlockTagStringMatches : IStructurePoolBlockTagPredicate {

public:
    virtual ~StructurePoolBlockTagPredicateBlockTagStringMatches();
    virtual void test(Block const&, CompoundTag const&)const;

    void StructurePoolBlockTagPredicateBlockTagStringMatches(Block const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
};
