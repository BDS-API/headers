#pragma once

#include "Container.h"
#include <vector>


class FillingContainer : Container {

public:
    ~FillingContainer(); // _ZN16FillingContainerD2Ev
    virtual void getItem(int)const; // _ZNK16FillingContainer7getItemEi
    virtual void setItem(int, ItemStack const&); // _ZN16FillingContainer7setItemEiRK9ItemStack
    virtual void removeItem(int, int); // _ZN16FillingContainer10removeItemEii
    virtual void getContainerSize()const; // _ZNK16FillingContainer16getContainerSizeEv
    virtual void getMaxStackSize()const; // _ZNK16FillingContainer15getMaxStackSizeEv
    virtual void startOpen(Player &); // _ZN16FillingContainer9startOpenER6Player
    virtual void stopOpen(Player &); // _ZN16FillingContainer8stopOpenER6Player
    virtual void getItemCount(ItemDescriptor const&); // _ZN16FillingContainer12getItemCountERK14ItemDescriptor
    virtual void add(ItemStack &); // _ZN16FillingContainer3addER9ItemStack
    virtual bool canAdd(ItemStack const&)const; // _ZNK16FillingContainer6canAddERK9ItemStack
    virtual void dropAll(bool); // _ZN16FillingContainer7dropAllEb
    virtual void clearSlot(int); // _ZN16FillingContainer9clearSlotEi
    virtual void clearInventory(int); // _ZN16FillingContainer14clearInventoryEi
    virtual void load(ListTag const&, SemVersion const&, Level &); // _ZN16FillingContainer4loadERK7ListTagRK10SemVersionR5Level
    virtual void doDrop(ItemStack &, bool); // _ZN16FillingContainer6doDropER9ItemStackb
    virtual void getEmptySlotsCount()const; // _ZNK16FillingContainer18getEmptySlotsCountEv
//  FillingContainer(Player *, int, ContainerType); //TODO: incomplete function definition // _ZN16FillingContainerC2EP6Playeri13ContainerType
    void _isCreative()const; // _ZNK16FillingContainer11_isCreativeEv
    void _getEmptySlotsCount(int, int)const; // _ZNK16FillingContainer19_getEmptySlotsCountEii
    void _trySetInSlot(ItemStack &, int const&, int const&, int &); // _ZN16FillingContainer13_trySetInSlotER9ItemStackRKiS3_Ri
    void _fixBackwardCompabilityItem(ItemStack &); // _ZN16FillingContainer27_fixBackwardCompabilityItemER9ItemStack
    void _setSlotIfValid(CompoundTag *, int &, bool, int, int, int); // _ZN16FillingContainer15_setSlotIfValidEP11CompoundTagRibiii
    void _tryGetTag(ListTag const&, int); // _ZN16FillingContainer10_tryGetTagERK7ListTagi
    void _release(int); // _ZN16FillingContainer8_releaseEi
    void getAndRemoveResource(ItemStack &, bool, bool); // _ZN16FillingContainer20getAndRemoveResourceER9ItemStackbb
    void getSlotWithItem(ItemStack const&, bool, bool)const; // _ZNK16FillingContainer15getSlotWithItemERK9ItemStackbb
    void removeResource(int); // _ZN16FillingContainer14removeResourceEi
    void _getSlot(int)const; // _ZNK16FillingContainer8_getSlotEi
    void removeResource(ItemStack const&); // _ZN16FillingContainer14removeResourceERK9ItemStack
    void removeResource(ItemStack const&, bool, bool, int); // _ZN16FillingContainer14removeResourceERK9ItemStackbbi
    bool hasResource(int); // _ZN16FillingContainer11hasResourceEi
    void swapSlots(int, int); // _ZN16FillingContainer9swapSlotsEii
    void _addResource(ItemStack const&); // _ZN16FillingContainer12_addResourceERK9ItemStack
    void _getFreeSlot()const; // _ZNK16FillingContainer12_getFreeSlotEv
    void _getSlotWithRemainingSpace(ItemStack const&)const; // _ZNK16FillingContainer26_getSlotWithRemainingSpaceERK9ItemStack
    void save(); // _ZN16FillingContainer4saveEv
    void getHotbarSize()const; // _ZNK16FillingContainer13getHotbarSizeEv
    void dropSlot(int, bool, bool, bool); // _ZN16FillingContainer8dropSlotEibbb
    void dropAll(int, int, bool); // _ZN16FillingContainer7dropAllEiib
    void replace(std::vector<ItemStack>, int); // _ZN16FillingContainer7replaceESt6vectorI9ItemStackSaIS1_EEi
};
