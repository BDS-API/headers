#pragma once

#include "../../item/ItemStack"
#include "../../container/Container"
#include "../../../unmapped/DataLoadHelper"
#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../actor/Player"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class LecternBlockActor : BlockActor, Container {

public:
    LecternBlockActor::~LecternBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getMaxStackSize()const;
    virtual void getContainerSize()const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);

    LecternBlockActor(BlockPos const&);
    void setPageOnServer(int, BlockSource &);
    void _sendRedstonePulse(BlockSource &);
    void getPage()const;
    void setTotalPages(int);
    void getTotalPages()const;
    bool hasBook()const;
    void dropBook(BlockSource &);
    void setItemFromBlock(int, ItemStack const&);
};
