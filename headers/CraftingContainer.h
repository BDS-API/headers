#pragma once

class CraftingContainer : Container {

    virtual void Crafting~CraftingContainer();
    virtual void Crafting~CraftingContainer();
    virtual void init(void);
    virtual void addContentChangeListener(ContainerContentChangeListener *);
    virtual void removeContentChangeListener(ContainerContentChangeListener *);
    virtual void CraftinggetItem(int)const;
    virtual void hasRoomForItem(ItemStack const&);
    virtual void addItem(ItemStack &);
    virtual void addItemToFirstEmptySlot(ItemStack &);
    virtual void CraftingsetItem(int, ItemStack const&);
    virtual void removeItem(int, int);
    virtual void removeAllItems(void);
    virtual void dropContents(BlockSource &, Vec3 const&, bool);
    virtual void CraftinggetContainerSize(void)const;
    virtual void CraftinggetMaxStackSize(void)const;
    virtual void CraftingstartOpen(Player &);
    virtual void CraftingstopOpen(Player &);
    virtual void getSlotCopies(void)const;
    virtual void getSlots(void)const;
    virtual void getItemCount(ItemDescriptor const&);
    virtual void getItemCount(ItemStack const&);
    virtual void findFirstSlotForItem(ItemStack const&)const;
    virtual void canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void CraftingsetContainerChanged(int);
    virtual void setContainerMoved(void);
    virtual void setCustomName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void hasCustomName(void)const;
    virtual void readAdditionalSaveData(CompoundTag const&);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void createTransactionContext(std::function<void ()(Container&, int, ItemStack const&, ItemStack const&)>, std::function<void ()(void)>);
    virtual void triggerTransactionChange(int, ItemStack const&, ItemStack const&);
}
