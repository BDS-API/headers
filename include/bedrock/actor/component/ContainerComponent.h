#pragma once

#include <string>
#include "../../../unmapped/ContainerContentChangeListener.h"
#include "IEntityComponent.h"


class ContainerComponent : ContainerContentChangeListener, IEntityComponent {

public:
    virtual void containerContentChanged(int); // _ZN18ContainerComponent23containerContentChangedEi
    ~ContainerComponent(); // _ZN18ContainerComponentD2Ev
    ContainerComponent(); // _ZN18ContainerComponentC2Ev
    ContainerComponent(ContainerComponent &&); // _ZN18ContainerComponentC2EOS_
    void _getRawContainerPtr()const; // _ZNK18ContainerComponent19_getRawContainerPtrEv
    void initFromDefinition(Actor &); // _ZN18ContainerComponent18initFromDefinitionER5Actor
    void initFromDefinition(Actor &, ContainerDescription const&); // _ZN18ContainerComponent18initFromDefinitionER5ActorRK20ContainerDescription
//  void rebuildContainer(Actor &, ContainerType, int, bool, int, bool); //TODO: incomplete function definition // _ZN18ContainerComponent16rebuildContainerER5Actor13ContainerTypeibib
    void addAdditionalSaveData(CompoundTag &); // _ZN18ContainerComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN18ContainerComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    bool canOpenContainer(Actor const&, Player &)const; // _ZNK18ContainerComponent16canOpenContainerERK5ActorR6Player
    void openContainer(Actor &, Player &); // _ZN18ContainerComponent13openContainerER5ActorR6Player
    void _unpackLootTable(Level &); // _ZN18ContainerComponent16_unpackLootTableER5Level
    bool canBeSiphonedFrom()const; // _ZNK18ContainerComponent17canBeSiphonedFromEv
    bool isPrivate()const; // _ZNK18ContainerComponent9isPrivateEv
    void setCustomName(std::string const&); // _ZN18ContainerComponent13setCustomNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool hasCustomName()const; // _ZNK18ContainerComponent13hasCustomNameEv
    void getContainerType()const; // _ZNK18ContainerComponent16getContainerTypeEv
    void getContainerSize()const; // _ZNK18ContainerComponent16getContainerSizeEv
    void _tryMoveInItem(BlockSource &, ItemStack &, int, int, int); // _ZN18ContainerComponent14_tryMoveInItemER11BlockSourceR9ItemStackiii
    bool hasRoomForItem(ItemActor const&); // _ZN18ContainerComponent14hasRoomForItemERK9ItemActor
    bool hasRoomForItem(ItemStack const&); // _ZN18ContainerComponent14hasRoomForItemERK9ItemStack
    void addItem(ItemStack &); // _ZN18ContainerComponent7addItemER9ItemStack
    void addItem(ItemActor &); // _ZN18ContainerComponent7addItemER9ItemActor
    void addItem(BlockSource &, ItemStack &, int, int); // _ZN18ContainerComponent7addItemER11BlockSourceR9ItemStackii
    void setItem(int, ItemStack const&); // _ZN18ContainerComponent7setItemEiRK9ItemStack
    void getItem(int)const; // _ZNK18ContainerComponent7getItemEi
    void removeItem(int, int); // _ZN18ContainerComponent10removeItemEii
    void countItemsOfType(ItemStack const&)const; // _ZNK18ContainerComponent16countItemsOfTypeERK9ItemStack
    void getSlots()const; // _ZNK18ContainerComponent8getSlotsEv
    void removeItemsOfType(ItemStack const&, int); // _ZN18ContainerComponent17removeItemsOfTypeERK9ItemStacki
    void findFirstSlotForItem(ItemStack const&)const; // _ZNK18ContainerComponent20findFirstSlotForItemERK9ItemStack
    void dropContents(BlockSource &, Vec3 const&, bool); // _ZN18ContainerComponent12dropContentsER11BlockSourceRK4Vec3b
    void setLootTable(std::string, int); // _ZN18ContainerComponent12setLootTableENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
