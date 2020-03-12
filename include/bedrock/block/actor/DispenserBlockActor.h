#pragma once

#include "../../item/ItemStack.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "RandomizableBlockActorContainer.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class DispenserBlockActor : RandomizableBlockActorContainer {

public:
    ~DispenserBlockActor();
    virtual void save(CompoundTag &)const;
    virtual void getMaxStackSize()const;
    virtual void stopOpen(Player &);
    virtual void getItem(int)const;
    virtual void startOpen(Player &);
    virtual void getContainer();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void onMove();
    virtual void getContainerSize()const;
    virtual void setItem(int, ItemStack const&);
    virtual void getRandomSlot();
    virtual std::string getName()const;
    virtual void getUpdatePacket(BlockSource &);
//  DispenserBlockActor(BlockPos, BlockActorType); //TODO: incomplete function definition
    void initItems();
    bool isSlotEmpty(int);
    DispenserBlockActor(BlockPos);
    bool isDispenser();
};
