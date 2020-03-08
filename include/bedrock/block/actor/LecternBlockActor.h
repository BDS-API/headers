#pragma once

#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../item/ItemStack"
#include "../../../unmapped/DataLoadHelper"
#include "../../container/Container"


class LecternBlockActor : BlockActor, Container {

public:
    virtual LecternBlockActor::~LecternBlockActor()
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
