#pragma once

#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../item/ItemInstance"
#include "../../item/ItemStack"
#include "../../../unmapped/DataLoadHelper"


class JukeboxBlockActor : RandomizableBlockActorContainer {

public:
    virtual JukeboxBlockActor::~JukeboxBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void getContainer();
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void startOpen(Player &);
    virtual void getContainerSize()const;
    virtual void getMaxStackSize()const;
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void stopOpen(Player &);

    JukeboxBlockActor(BlockPos const&);
    void getRecord()const;
    void setRecord(ItemStack const&);
    bool hasRecord()const;
    void stopPlayingRecord(BlockSource &)const;
};
