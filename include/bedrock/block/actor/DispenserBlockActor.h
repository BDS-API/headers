#pragma once

#include <string>
#include "../../util/BlockPos.h"
#include "RandomizableBlockActorContainer.h"


class DispenserBlockActor : RandomizableBlockActorContainer {

public:
    virtual void getContainerSize()const;
    virtual void setItem(int, ItemStack const&);
    virtual void getContainer();
    virtual void save(CompoundTag &)const;
    virtual void startOpen(Player &);
    virtual void getMaxStackSize()const;
    virtual void getUpdatePacket(BlockSource &);
    ~DispenserBlockActor();
    virtual std::string getName()const;
    virtual void getRandomSlot();
    virtual void onMove();
    virtual void stopOpen(Player &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getItem(int)const;
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    DispenserBlockActor(BlockPos);
    bool isDispenser();
//  DispenserBlockActor(BlockPos, BlockActorType); //TODO: incomplete function definition
    bool isSlotEmpty(int);
    void initItems();
};
