#pragma once

#include <string>
#include "../../util/BlockPos.h"
#include "RandomizableBlockActorContainer.h"


class DispenserBlockActor : RandomizableBlockActorContainer {

public:
    ~DispenserBlockActor(); // _ZN19DispenserBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN19DispenserBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK19DispenserBlockActor4saveER11CompoundTag
    virtual void getUpdatePacket(BlockSource &); // _ZN19DispenserBlockActor15getUpdatePacketER11BlockSource
    virtual void onMove(); // _ZN19DispenserBlockActor6onMoveEv
    virtual std::string getName()const; // _ZNK19DispenserBlockActor7getNameB5cxx11Ev
    virtual void getContainer(); // _ZN19DispenserBlockActor12getContainerEv
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN19DispenserBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    virtual void startOpen(Player &); // _ZN19DispenserBlockActor9startOpenER6Player
    virtual void getContainerSize()const; // _ZNK19DispenserBlockActor16getContainerSizeEv
    virtual void getItem(int)const; // _ZNK19DispenserBlockActor7getItemEi
    virtual void setItem(int, ItemStack const&); // _ZN19DispenserBlockActor7setItemEiRK9ItemStack
    virtual void getMaxStackSize()const; // _ZNK19DispenserBlockActor15getMaxStackSizeEv
    virtual void getRandomSlot(); // _ZN19DispenserBlockActor13getRandomSlotEv
    virtual void stopOpen(Player &); // _ZN19DispenserBlockActor8stopOpenER6Player
    DispenserBlockActor(BlockPos); // _ZN19DispenserBlockActorC2E8BlockPos
    void initItems(); // _ZN19DispenserBlockActor9initItemsEv
//  DispenserBlockActor(BlockPos, BlockActorType); //TODO: incomplete function definition // _ZN19DispenserBlockActorC2E8BlockPos14BlockActorType
    bool isSlotEmpty(int); // _ZN19DispenserBlockActor11isSlotEmptyEi
    bool isDispenser(); // _ZN19DispenserBlockActor11isDispenserEv
};
