#pragma once

class IStructurePoolBlockTagPredicate {

    virtual ~IStructurePoolBlockTagPredicate();
    virtual ~IStructurePoolBlockTagPredicate();
    virtual void test(Block const&, CompoundTag const&)const;
}
