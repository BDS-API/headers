#pragma once

#include "../../item/ItemStack.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "RandomizableBlockActorContainer.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class JukeboxBlockActor : RandomizableBlockActorContainer {

public:
    virtual void getMaxStackSize()const;
    virtual void setItem(int, ItemStack const&);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    ~JukeboxBlockActor();
    virtual void getContainerSize()const;
    virtual void getUpdatePacket(BlockSource &);
    virtual void getContainer();
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void stopOpen(Player &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void startOpen(Player &);
    virtual void getItem(int)const;
    virtual void onChanged(BlockSource &);
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    void setRecord(ItemStack const&);
    JukeboxBlockActor(BlockPos const&);
    bool hasRecord()const;
    void stopPlayingRecord(BlockSource &)const;
    void getRecord()const;
};
