#pragma once

#include <string>
#include "../../nbt/CompoundTag.h"
#include "./RandomizableBlockActorContainer.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../util/BlockPos.h"
#include "../../item/ItemStack.h"
#include "../unmapped/BlockSource.h"
#include "../../actor/Player.h"


class DispenserBlockActor : RandomizableBlockActorContainer {

public:
    virtual ~DispenserBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void getUpdatePacket(BlockSource &);
    virtual void onMove();
    virtual std::string getName()const;
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
//  DispenserBlockActor(BlockPos, BlockActorType); //TODO: incomplete function definition
    bool isSlotEmpty(int);
    bool isDispenser();
};
