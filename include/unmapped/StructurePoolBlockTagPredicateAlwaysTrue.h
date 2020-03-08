#pragma once



class StructurePoolBlockTagPredicateAlwaysTrue : IStructurePoolBlockTagPredicate {

public:
    virtual StructurePoolBlockTagPredicateAlwaysTrue::~StructurePoolBlockTagPredicateAlwaysTrue();
    virtual void test(Block const&, CompoundTag const&)const;

    StructurePoolBlockTagPredicateAlwaysTrue(void);
};
