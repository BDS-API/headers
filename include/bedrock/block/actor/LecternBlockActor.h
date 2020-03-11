#pragma once

#include "../../container/Container.h"
#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include "../../level/Level.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../util/BlockPos.h"
#include "../../item/ItemStack.h"
#include "../unmapped/BlockSource.h"
#include "../../actor/Player.h"


class LecternBlockActor : BlockActor, Container {

public:
    virtual ~LecternBlockActor();
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
