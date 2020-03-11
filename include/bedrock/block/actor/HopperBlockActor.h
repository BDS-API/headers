#pragma once

#include "../../container/Container.h"
#include <string>
#include "./BlockActor.h"
#include "../../nbt/CompoundTag.h"
#include "../../level/Level.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../util/BlockPos.h"
#include "../../util/Tick.h"
#include "../../item/ItemStack.h"
#include "../unmapped/BlockSource.h"
#include "../../../unmapped/Hopper.h"
#include "../../actor/Player.h"


class HopperBlockActor : BlockActor, Container, Hopper {

public:
    virtual ~HopperBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onMove();
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual std::string getName()const;
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
//  bool isAttachedToContainerType(BlockSource &, ContainerType); //TODO: incomplete function definition
//  bool isSourceOfContainerType(BlockSource &, ContainerType); //TODO: incomplete function definition
    void updateCooldownAfterMove(Tick const&, int);
};
