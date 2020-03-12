#pragma once

#include "BlockActor.h"


class CampfireBlockActor : BlockActor {

public:
    static long MIN_SMOKE_THRESHOLD_COUNTER;
    static long MAX_SMOKE_THRESHOLD_COUNTER;

    virtual void getUpdatePacket(BlockSource &);
    virtual void getShadowRadius(BlockSource &)const;
    virtual void tick(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    ~CampfireBlockActor();
    virtual void onChanged(BlockSource &);
    virtual void save(CompoundTag &)const;
    void getCookingItem(int);
    void dropAllItems(BlockSource &);
    void _finishCooking(BlockSource &, int);
    void setItem(BlockSource &, ItemInstance const&);
    CampfireBlockActor(BlockPos const&);
    void _removeItem(int);
};
