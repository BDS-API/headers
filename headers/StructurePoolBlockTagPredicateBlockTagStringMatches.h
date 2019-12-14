#pragma once

class StructurePoolBlockTagPredicateBlockTagStringMatches : IStructurePoolBlockTagPredicate {

public:
    virtual ~StructurePoolBlockTagPredicateBlockTagStringMatches();
    virtual void test(Block const&, CompoundTag const&)const;

    void StructurePoolBlockTagPredicateBlockTagStringMatches(Block const&, std::string, std::string);
};
