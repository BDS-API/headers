#pragma once

#include "BlockActor.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"


class CampfireBlockActor : BlockActor {

public:
    static long MIN_SMOKE_THRESHOLD_COUNTER;
    static long MAX_SMOKE_THRESHOLD_COUNTER;

    virtual void getShadowRadius(BlockSource &)const;
    ~CampfireBlockActor();
    virtual void save(CompoundTag &)const;
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void onChanged(BlockSource &);
    virtual void tick(BlockSource &);
    void setItem(BlockSource &, ItemInstance const&);
    void _finishCooking(BlockSource &, int);
    void getCookingItem(int);
    CampfireBlockActor(BlockPos const&);
    void _removeItem(int);
    void dropAllItems(BlockSource &);
};
