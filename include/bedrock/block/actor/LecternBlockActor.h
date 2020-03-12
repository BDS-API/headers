#pragma once

#include "BlockActor.h"
#include "../../item/ItemStack.h"
#include "../../container/Container.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class LecternBlockActor : BlockActor, Container {

public:
    virtual void getMaxStackSize()const;
    virtual void getItem(int)const;
    virtual void getContainerSize()const;
    virtual void stopOpen(Player &);
    virtual void startOpen(Player &);
    virtual void onChanged(BlockSource &);
    ~LecternBlockActor();
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void setItem(int, ItemStack const&);
    void getTotalPages()const;
    void dropBook(BlockSource &);
    void setItemFromBlock(int, ItemStack const&);
    bool hasBook()const;
    void _sendRedstonePulse(BlockSource &);
    void setPageOnServer(int, BlockSource &);
    void setTotalPages(int);
    LecternBlockActor(BlockPos const&);
    void getPage()const;
};
