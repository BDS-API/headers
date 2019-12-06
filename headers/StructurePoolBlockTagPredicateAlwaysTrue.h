#pragma once

class StructurePoolBlockTagPredicateAlwaysTrue : IStructurePoolBlockTagPredicate {

public:
    virtual ~StructurePoolBlockTagPredicateAlwaysTrue();
    virtual void test(Block const&, CompoundTag const&)const;

    void StructurePoolBlockTagPredicateAlwaysTrue(void);
};
