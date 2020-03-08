#pragma once

#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../../unmapped/DataLoadHelper"


class ComparatorBlockActor : BlockActor {

public:
    virtual ComparatorBlockActor::~ComparatorBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getOutputSignal();
    virtual void setOutputSignal(int);

    ComparatorBlockActor(BlockPos const&);
};
