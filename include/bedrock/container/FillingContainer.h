#pragma once

#include "Container.h"
#include <vector>


class FillingContainer : Container {

public:
    virtual bool canAdd(ItemStack const&)const;
    virtual void clearSlot(int);
    virtual void clearInventory(int);
    virtual void doDrop(ItemStack &, bool);
    virtual void setItem(int, ItemStack const&);
    virtual void getMaxStackSize()const;
    virtual void getItemCount(ItemDescriptor const&);
    virtual void dropAll(bool);
    virtual void stopOpen(Player &);
    virtual void getEmptySlotsCount()const;
    virtual void add(ItemStack &);
    virtual void removeItem(int, int);
    ~FillingContainer();
    virtual void getContainerSize()const;
    virtual void getItem(int)const;
    virtual void startOpen(Player &);
    virtual void load(ListTag const&, SemVersion const&, Level &);
    void _setSlotIfValid(CompoundTag *, int &, bool, int, int, int);
    void _getSlot(int)const;
    void getHotbarSize()const;
    void getAndRemoveResource(ItemStack &, bool, bool);
    void _addResource(ItemStack const&);
    void _getSlotWithRemainingSpace(ItemStack const&)const;
    void removeResource(ItemStack const&, bool, bool, int);
    void removeResource(int);
    void _trySetInSlot(ItemStack &, int const&, int const&, int &);
    void getSlotWithItem(ItemStack const&, bool, bool)const;
    void _release(int);
    void save();
    void _tryGetTag(ListTag const&, int);
    void _fixBackwardCompabilityItem(ItemStack &);
//  FillingContainer(Player *, int, ContainerType); //TODO: incomplete function definition
    void _isCreative()const;
    void _getEmptySlotsCount(int, int)const;
    void removeResource(ItemStack const&);
    bool hasResource(int);
    void replace(std::vector<ItemStack>, int);
    void dropSlot(int, bool, bool, bool);
    void swapSlots(int, int);
    void dropAll(int, int, bool);
    void _getFreeSlot()const;
};
