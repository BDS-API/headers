#pragma once

class StructurePoolActorPredicateAlwaysTrue : IStructurePoolActorPredicate {

public:
    virtual ~StructurePoolActorPredicateAlwaysTrue();
    virtual void test(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;

    void StructurePoolActorPredicateAlwaysTrue(void);
};
