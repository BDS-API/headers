#pragma once

#include "../nbt/CompoundTag"
#include "../level/Level"
#include "../actor/Player"
#include "../nbt/ListTag"
#include "../../unmapped/SemVersion"
#include "../item/unmapped/ItemDescriptor"
#include "../item/ItemStack"


class FillingContainer : Container {

public:
    virtual FillingContainer::~FillingContainer()
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void removeItem(int, int);
    virtual void getContainerSize()const;
    virtual void getMaxStackSize()const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);
    virtual void getItemCount(ItemDescriptor const&);
    virtual void add(ItemStack &);
    virtual bool canAdd(ItemStack const&)const;
    virtual void dropAll(bool);
    virtual void clearSlot(int);
    virtual void clearInventory(int);
    virtual void load(ListTag const&, SemVersion const&, Level &);
    virtual void doDrop(ItemStack &, bool);
    virtual void getEmptySlotsCount()const;

    FillingContainer(Player *, int, ContainerType);
    void _isCreative()const;
    void _getEmptySlotsCount(int, int)const;
    void _trySetInSlot(ItemStack &, int const&, int const&, int &);
    void _fixBackwardCompabilityItem(ItemStack &);
    void _setSlotIfValid(CompoundTag *, int &, bool, int, int, int);
    void _tryGetTag(ListTag const&, int);
    void _release(int);
    void getAndRemoveResource(ItemStack &, bool, bool);
    void getSlotWithItem(ItemStack const&, bool, bool)const;
    void removeResource(int);
    void _getSlot(int)const;
    void removeResource(ItemStack const&);
    void removeResource(ItemStack const&, bool, bool, int);
    bool hasResource(int);
    void swapSlots(int, int);
    void _addResource(ItemStack const&);
    void _getFreeSlot()const;
    void _getSlotWithRemainingSpace(ItemStack const&)const;
    void save();
    void getHotbarSize()const;
    void dropSlot(int, bool, bool, bool);
    void dropAll(int, int, bool);
    void replace(std::vector<ItemStack, std::allocator<ItemStack>>, int);
};
