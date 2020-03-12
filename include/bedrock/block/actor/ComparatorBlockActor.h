#pragma once

#include "BlockActor.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"


class ComparatorBlockActor : BlockActor {

public:
    ~ComparatorBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getOutputSignal();
    virtual void save(CompoundTag &)const;
    virtual void setOutputSignal(int);
    virtual void tick(BlockSource &);
    ComparatorBlockActor(BlockPos const&);
};
