#pragma once

#include "../../item/ItemStack"
#include "../../../unmapped/DataLoadHelper"
#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../actor/Player"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class DispenserBlockActor : RandomizableBlockActorContainer {

public:
    DispenserBlockActor::~DispenserBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void getUpdatePacket(BlockSource &);
    virtual void onMove();
    virtual void getName()const;
    virtual void getContainer();
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void startOpen(Player &);
    virtual void getContainerSize()const;
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getMaxStackSize()const;
    virtual void getRandomSlot();
    virtual void stopOpen(Player &);

    DispenserBlockActor(BlockPos);
    void initItems();
    DispenserBlockActor(BlockPos, BlockActorType);
    bool isSlotEmpty(int);
    bool isDispenser();
};
