#pragma once

#include "BlockActor.h"
#include "../../container/Container.h"


class LecternBlockActor : BlockActor, Container {

public:
    ~LecternBlockActor(); // _ZN17LecternBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN17LecternBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK17LecternBlockActor4saveER11CompoundTag
    virtual void onChanged(BlockSource &); // _ZN17LecternBlockActor9onChangedER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN17LecternBlockActor15getUpdatePacketER11BlockSource
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN17LecternBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    virtual void getItem(int)const; // _ZNK17LecternBlockActor7getItemEi
    virtual void setItem(int, ItemStack const&); // _ZN17LecternBlockActor7setItemEiRK9ItemStack
    virtual void getMaxStackSize()const; // _ZNK17LecternBlockActor15getMaxStackSizeEv
    virtual void getContainerSize()const; // _ZNK17LecternBlockActor16getContainerSizeEv
    virtual void startOpen(Player &); // _ZN17LecternBlockActor9startOpenER6Player
    virtual void stopOpen(Player &); // _ZN17LecternBlockActor8stopOpenER6Player
    LecternBlockActor(BlockPos const&); // _ZN17LecternBlockActorC2ERK8BlockPos
    void setPageOnServer(int, BlockSource &); // _ZN17LecternBlockActor15setPageOnServerEiR11BlockSource
    void _sendRedstonePulse(BlockSource &); // _ZN17LecternBlockActor18_sendRedstonePulseER11BlockSource
    void getPage()const; // _ZNK17LecternBlockActor7getPageEv
    void setTotalPages(int); // _ZN17LecternBlockActor13setTotalPagesEi
    void getTotalPages()const; // _ZNK17LecternBlockActor13getTotalPagesEv
    bool hasBook()const; // _ZNK17LecternBlockActor7hasBookEv
    void dropBook(BlockSource &); // _ZN17LecternBlockActor8dropBookER11BlockSource
    void setItemFromBlock(int, ItemStack const&); // _ZN17LecternBlockActor16setItemFromBlockEiRK9ItemStack
};
