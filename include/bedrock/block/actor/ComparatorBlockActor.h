#pragma once

#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../unmapped/BlockSource.h"


class ComparatorBlockActor : BlockActor {

public:
    virtual ~ComparatorBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getOutputSignal();
    virtual void setOutputSignal(int);

    ComparatorBlockActor(BlockPos const&);
};
