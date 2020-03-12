#pragma once

#include "BlockActor.h"
#include "../../item/ItemStack.h"
#include "../../../unmapped/Hopper.h"
#include "../../container/Container.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/Tick.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class HopperBlockActor : BlockActor, Container, Hopper {

public:
    virtual std::string getName()const;
    virtual void tick(BlockSource &);
    virtual void getItem(int)const;
    virtual void getContainerSize()const;
    ~HopperBlockActor();
    virtual void setItem(int, ItemStack const&);
    virtual void getMaxStackSize()const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);
    virtual void getContainer();
    virtual void onMove();
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void save(CompoundTag &)const;
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    void checkForSmeltEverythingAchievement(BlockSource &);
    void _ensureTickingOrder(BlockSource &, int);
    void _countItems()const;
//  bool isSourceOfContainerType(BlockSource &, ContainerType); //TODO: incomplete function definition
    void updateCooldownAfterMove(Tick const&, int);
    void _initItems();
    void getLevelPos();
    bool isAttachedToChestAndFurnace(BlockSource &);
    HopperBlockActor(BlockPos const&);
    void getAttachedFurnace(BlockSource &);
    void _tick(BlockSource &, int);
//  bool isAttachedToContainerType(BlockSource &, ContainerType); //TODO: incomplete function definition
};
