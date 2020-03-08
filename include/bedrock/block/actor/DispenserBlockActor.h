#pragma once

#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../item/ItemStack"
#include "../../../unmapped/DataLoadHelper"


class DispenserBlockActor : RandomizableBlockActorContainer {

public:
    virtual DispenserBlockActor::~DispenserBlockActor()
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
