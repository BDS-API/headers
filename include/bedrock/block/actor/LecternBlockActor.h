#pragma once

#include "../../../unmapped/BlockPos"
#include "../../level/Level"
#include "../../container/Container"
#include "../../../unmapped/BlockSource"
#include "../../actor/Player"
#include "../../item/ItemStack"
#include "../../nbt/CompoundTag"


class LecternBlockActor : BlockActor, Container {

public:
    virtual LecternBlockActor::~LecternBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getMaxStackSize(void)const;
    virtual void getContainerSize(void)const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);

    LecternBlockActor(BlockPos const&);
    void setPageOnServer(int, BlockSource &);
    void _sendRedstonePulse(BlockSource &);
    void getPage(void)const;
    void setTotalPages(int);
    void getTotalPages(void)const;
    bool hasBook(void)const;
    void dropBook(BlockSource &);
    void setItemFromBlock(int, ItemStack const&);
};
