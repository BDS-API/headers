#pragma once

#include <string>
#include "../../../unmapped/Hopper.h"
#include "BlockActor.h"
#include "../../container/Container.h"


class HopperBlockActor : BlockActor, Container, Hopper {

public:
    ~HopperBlockActor(); // _ZN16HopperBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN16HopperBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK16HopperBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN16HopperBlockActor4tickER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN16HopperBlockActor15getUpdatePacketER11BlockSource
    virtual void onMove(); // _ZN16HopperBlockActor6onMoveEv
    virtual void onNeighborChanged(BlockSource &, BlockPos const&); // _ZN16HopperBlockActor17onNeighborChangedER11BlockSourceRK8BlockPos
    virtual std::string getName()const; // _ZNK16HopperBlockActor7getNameB5cxx11Ev
    virtual void getContainer(); // _ZN16HopperBlockActor12getContainerEv
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN16HopperBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    virtual void getItem(int)const; // _ZNK16HopperBlockActor7getItemEi
    virtual void setItem(int, ItemStack const&); // _ZN16HopperBlockActor7setItemEiRK9ItemStack
    virtual void getContainerSize()const; // _ZNK16HopperBlockActor16getContainerSizeEv
    virtual void getMaxStackSize()const; // _ZNK16HopperBlockActor15getMaxStackSizeEv
    virtual void startOpen(Player &); // _ZN16HopperBlockActor9startOpenER6Player
    virtual void stopOpen(Player &); // _ZN16HopperBlockActor8stopOpenER6Player
    HopperBlockActor(BlockPos const&); // _ZN16HopperBlockActorC2ERK8BlockPos
    void _initItems(); // _ZN16HopperBlockActor10_initItemsEv
    void _tick(BlockSource &, int); // _ZN16HopperBlockActor5_tickER11BlockSourcei
    void _ensureTickingOrder(BlockSource &, int); // _ZN16HopperBlockActor19_ensureTickingOrderER11BlockSourcei
    void getLevelPos(); // _ZN16HopperBlockActor11getLevelPosEv
    void _countItems()const; // _ZNK16HopperBlockActor11_countItemsEv
    void checkForSmeltEverythingAchievement(BlockSource &); // _ZN16HopperBlockActor34checkForSmeltEverythingAchievementER11BlockSource
    bool isAttachedToChestAndFurnace(BlockSource &); // _ZN16HopperBlockActor27isAttachedToChestAndFurnaceER11BlockSource
    void getAttachedFurnace(BlockSource &); // _ZN16HopperBlockActor18getAttachedFurnaceER11BlockSource
//  bool isAttachedToContainerType(BlockSource &, ContainerType); //TODO: incomplete function definition // _ZN16HopperBlockActor25isAttachedToContainerTypeER11BlockSource13ContainerType
//  bool isSourceOfContainerType(BlockSource &, ContainerType); //TODO: incomplete function definition // _ZN16HopperBlockActor23isSourceOfContainerTypeER11BlockSource13ContainerType
    void updateCooldownAfterMove(Tick const&, int); // _ZN16HopperBlockActor23updateCooldownAfterMoveERK4Ticki
};
