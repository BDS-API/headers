#pragma once

#include <string>
#include "../../container/Container.h"
#include "../../../unmapped/Hopper.h"
#include "BlockActor.h"


class HopperBlockActor : BlockActor, Container, Hopper {

public:
    virtual void getContainerSize()const;
    virtual void setItem(int, ItemStack const&);
    ~HopperBlockActor();
    virtual void getContainer();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual std::string getName()const;
    virtual void onMove();
    virtual void stopOpen(Player &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void getItem(int)const;
    virtual void tick(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void startOpen(Player &);
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void getMaxStackSize()const;
    virtual void save(CompoundTag &)const;
    void _tick(BlockSource &, int);
//  bool isAttachedToContainerType(BlockSource &, ContainerType); //TODO: incomplete function definition
    void getLevelPos();
    void _ensureTickingOrder(BlockSource &, int);
    void updateCooldownAfterMove(Tick const&, int);
    void _countItems()const;
    HopperBlockActor(BlockPos const&);
//  bool isSourceOfContainerType(BlockSource &, ContainerType); //TODO: incomplete function definition
    bool isAttachedToChestAndFurnace(BlockSource &);
    void checkForSmeltEverythingAchievement(BlockSource &);
    void getAttachedFurnace(BlockSource &);
    void _initItems();
};
