#pragma once

class StructurePoolBlockTagPredicateBlockTagMatch : IStructurePoolBlockTagPredicate {

public:
    virtual ~StructurePoolBlockTagPredicateBlockTagMatch();
    virtual void test(Block const&, CompoundTag const&)const;

    void StructurePoolBlockTagPredicateBlockTagMatch(Block const&, CompoundTag const&);
};
