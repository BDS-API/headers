#pragma once

#include "../../../unmapped/DataLoadHelper"
#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../item/ItemInstance"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class CampfireBlockActor : BlockActor {

public:
    static long MIN_SMOKE_THRESHOLD_COUNTER;
    static long MAX_SMOKE_THRESHOLD_COUNTER;

    CampfireBlockActor::~CampfireBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void getShadowRadius(BlockSource &)const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    CampfireBlockActor(BlockPos const&);
    void _finishCooking(BlockSource &, int);
    void getCookingItem(int);
    void setItem(BlockSource &, ItemInstance const&);
    void dropAllItems(BlockSource &);
    void _removeItem(int);
};
