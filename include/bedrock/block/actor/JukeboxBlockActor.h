#pragma once

#include "RandomizableBlockActorContainer.h"


class JukeboxBlockActor : RandomizableBlockActorContainer {

public:
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getItem(int)const;
    virtual void stopOpen(Player &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getContainer();
    virtual void getMaxStackSize()const;
    virtual void tick(BlockSource &);
    ~JukeboxBlockActor();
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void getContainerSize()const;
    virtual void startOpen(Player &);
    virtual void save(CompoundTag &)const;
    void stopPlayingRecord(BlockSource &)const;
    void getRecord()const;
    JukeboxBlockActor(BlockPos const&);
    void setRecord(ItemStack const&);
    bool hasRecord()const;
};
