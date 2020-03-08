#pragma once

#include "../../../unmapped/BlockPos"
#include "../../level/Level"
#include "../../../unmapped/BlockSource"
#include "../../actor/Player"
#include "../../item/ItemStack"
#include "../../nbt/CompoundTag"


class DispenserBlockActor : RandomizableBlockActorContainer {

public:
    virtual DispenserBlockActor::~DispenserBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void getUpdatePacket(BlockSource &);
    virtual void onMove(void);
    virtual void getName[abi:cxx11](void)const;
    virtual void getContainer(void);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void startOpen(Player &);
    virtual void getContainerSize(void)const;
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getMaxStackSize(void)const;
    virtual void getRandomSlot(void);
    virtual void stopOpen(Player &);

    DispenserBlockActor(BlockPos);
    void initItems(void);
    DispenserBlockActor(BlockPos, BlockActorType);
    bool isSlotEmpty(int);
    bool isDispenser(void);
};
