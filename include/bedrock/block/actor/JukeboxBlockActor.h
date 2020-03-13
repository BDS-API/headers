#pragma once

#include "RandomizableBlockActorContainer.h"


class JukeboxBlockActor : RandomizableBlockActorContainer {

public:
    ~JukeboxBlockActor(); // _ZN17JukeboxBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN17JukeboxBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK17JukeboxBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN17JukeboxBlockActor4tickER11BlockSource
    virtual void onChanged(BlockSource &); // _ZN17JukeboxBlockActor9onChangedER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN17JukeboxBlockActor15getUpdatePacketER11BlockSource
    virtual void getContainer(); // _ZN17JukeboxBlockActor12getContainerEv
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN17JukeboxBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    virtual void startOpen(Player &); // _ZN17JukeboxBlockActor9startOpenER6Player
    virtual void getContainerSize()const; // _ZNK17JukeboxBlockActor16getContainerSizeEv
    virtual void getMaxStackSize()const; // _ZNK17JukeboxBlockActor15getMaxStackSizeEv
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const; // _ZNK17JukeboxBlockActor13canPushInItemER11BlockSourceiiRK12ItemInstance
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const; // _ZNK17JukeboxBlockActor14canPullOutItemER11BlockSourceiiRK12ItemInstance
    virtual void getItem(int)const; // _ZNK17JukeboxBlockActor7getItemEi
    virtual void setItem(int, ItemStack const&); // _ZN17JukeboxBlockActor7setItemEiRK9ItemStack
    virtual void stopOpen(Player &); // _ZN17JukeboxBlockActor8stopOpenER6Player
    JukeboxBlockActor(BlockPos const&); // _ZN17JukeboxBlockActorC2ERK8BlockPos
    void getRecord()const; // _ZNK17JukeboxBlockActor9getRecordEv
    void setRecord(ItemStack const&); // _ZN17JukeboxBlockActor9setRecordERK9ItemStack
    bool hasRecord()const; // _ZNK17JukeboxBlockActor9hasRecordEv
    void stopPlayingRecord(BlockSource &)const; // _ZNK17JukeboxBlockActor17stopPlayingRecordER11BlockSource
};
