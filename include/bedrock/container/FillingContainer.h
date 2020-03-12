#pragma once

#include "../nbt/ListTag.h"
#include "../item/unmapped/ItemDescriptor.h"
#include "Container.h"
#include "../nbt/CompoundTag.h"
#include <vector>
#include "../../unmapped/SemVersion.h"
#include "../actor/Player.h"
#include "../level/Level.h"
#include "../item/ItemStack.h"


class FillingContainer : Container {

public:
    virtual void removeItem(int, int);
    virtual void getEmptySlotsCount()const;
    virtual void getItem(int)const;
    virtual void doDrop(ItemStack &, bool);
    virtual bool canAdd(ItemStack const&)const;
    virtual void clearInventory(int);
    virtual void getContainerSize()const;
    virtual void add(ItemStack &);
    virtual void clearSlot(int);
    virtual void startOpen(Player &);
    virtual void dropAll(bool);
    virtual void stopOpen(Player &);
    virtual void setItem(int, ItemStack const&);
    virtual void load(ListTag const&, SemVersion const&, Level &);
    virtual void getMaxStackSize()const;
    ~FillingContainer();
    virtual void getItemCount(ItemDescriptor const&);
    void save();
    void removeResource(ItemStack const&, bool, bool, int);
    void removeResource(int);
    void _getSlot(int)const;
    void _trySetInSlot(ItemStack &, int const&, int const&, int &);
    bool hasResource(int);
    void dropSlot(int, bool, bool, bool);
    void _getSlotWithRemainingSpace(ItemStack const&)const;
//  FillingContainer(Player *, int, ContainerType); //TODO: incomplete function definition
    void getAndRemoveResource(ItemStack &, bool, bool);
    void getSlotWithItem(ItemStack const&, bool, bool)const;
    void _fixBackwardCompabilityItem(ItemStack &);
    void _isCreative()const;
    void _getFreeSlot()const;
    void removeResource(ItemStack const&);
    void dropAll(int, int, bool);
    void _getEmptySlotsCount(int, int)const;
    void swapSlots(int, int);
    void getHotbarSize()const;
    void _release(int);
    void replace(std::vector<ItemStack>, int);
    void _tryGetTag(ListTag const&, int);
    void _setSlotIfValid(CompoundTag *, int &, bool, int, int, int);
    void _addResource(ItemStack const&);
};
