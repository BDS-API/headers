#pragma once

#include "../../../unmapped/DataLoadHelper"
#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class ComparatorBlockActor : BlockActor {

public:
    ComparatorBlockActor::~ComparatorBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getOutputSignal();
    virtual void setOutputSignal(int);

    ComparatorBlockActor(BlockPos const&);
};
