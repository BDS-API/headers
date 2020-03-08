#pragma once

#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../item/ItemInstance"
#include "../../../unmapped/DataLoadHelper"


class CampfireBlockActor : BlockActor {

public:
    static long MIN_SMOKE_THRESHOLD_COUNTER;
    static long MAX_SMOKE_THRESHOLD_COUNTER;

    virtual CampfireBlockActor::~CampfireBlockActor()
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
