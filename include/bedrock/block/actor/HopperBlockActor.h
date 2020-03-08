#pragma once

#include "../../item/ItemStack"
#include "../../container/Container"
#include "../../../unmapped/DataLoadHelper"
#include "../../util/Tick"
#include "../../../unmapped/Hopper"
#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../actor/Player"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class HopperBlockActor : BlockActor, Container, Hopper {

public:
    HopperBlockActor::~HopperBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onMove();
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void getName()const;
    virtual void getContainer();
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getContainerSize()const;
    virtual void getMaxStackSize()const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);

    HopperBlockActor(BlockPos const&);
    void _initItems();
    void _tick(BlockSource &, int);
    void _ensureTickingOrder(BlockSource &, int);
    void getLevelPos();
    void _countItems()const;
    void checkForSmeltEverythingAchievement(BlockSource &);
    bool isAttachedToChestAndFurnace(BlockSource &);
    void getAttachedFurnace(BlockSource &);
    bool isAttachedToContainerType(BlockSource &, ContainerType);
    bool isSourceOfContainerType(BlockSource &, ContainerType);
    void updateCooldownAfterMove(Tick const&, int);
};
