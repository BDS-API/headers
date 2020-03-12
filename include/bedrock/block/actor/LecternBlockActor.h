#pragma once

#include "../../container/Container.h"
#include "BlockActor.h"


class LecternBlockActor : BlockActor, Container {

public:
    virtual void startOpen(Player &);
    virtual void getMaxStackSize()const;
    virtual void stopOpen(Player &);
    virtual void getContainerSize()const;
    virtual void setItem(int, ItemStack const&);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void onChanged(BlockSource &);
    virtual void save(CompoundTag &)const;
    ~LecternBlockActor();
    virtual void getUpdatePacket(BlockSource &);
    virtual void getItem(int)const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    LecternBlockActor(BlockPos const&);
    void getTotalPages()const;
    void dropBook(BlockSource &);
    void setPageOnServer(int, BlockSource &);
    void setTotalPages(int);
    void setItemFromBlock(int, ItemStack const&);
    bool hasBook()const;
    void getPage()const;
    void _sendRedstonePulse(BlockSource &);
};
