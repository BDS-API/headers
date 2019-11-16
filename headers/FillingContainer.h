#pragma once

class FillingContainer : Container {

    virtual void Filling~FillingContainer();
    virtual void Filling~FillingContainer();
    virtual void init(void);
    virtual void addContentChangeListener(ContainerContentChangeListener *);
    virtual void removeContentChangeListener(ContainerContentChangeListener *);
    virtual void FillinggetItem(int)const;
    virtual void hasRoomForItem(ItemStack const&);
    virtual void addItem(ItemStack &);
    virtual void addItemToFirstEmptySlot(ItemStack &);
    virtual void FillingsetItem(int, ItemStack const&);
    virtual void FillingremoveItem(int, int);
    virtual void removeAllItems(void);
    virtual void dropContents(BlockSource &, Vec3 const&, bool);
    virtual void FillinggetContainerSize(void)const;
    virtual void FillinggetMaxStackSize(void)const;
    virtual void FillingstartOpen(Player &);
    virtual void FillingstopOpen(Player &);
    virtual void getSlotCopies(void)const;
    virtual void getSlots(void)const;
    virtual void FillinggetItemCount(ItemDescriptor const&);
    virtual void getItemCount(ItemStack const&);
    virtual void findFirstSlotForItem(ItemStack const&)const;
    virtual void canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void setContainerChanged(int);
    virtual void setContainerMoved(void);
    virtual void setCustomName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void hasCustomName(void)const;
    virtual void readAdditionalSaveData(CompoundTag const&);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void createTransactionContext(std::function<void ()(Container&, int, ItemStack const&, ItemStack const&)>, std::function<void ()(void)>);
    virtual void triggerTransactionChange(int, ItemStack const&, ItemStack const&);
    virtual void Fillingadd(ItemStack &);
    virtual void FillingcanAdd(ItemStack const&)const;
    virtual void FillingdropAll(bool);
    virtual void FillingclearSlot(int);
    virtual void FillingclearInventory(int);
    virtual void Fillingload(ListTag const&, SemVersion const&, Level &);
    virtual void FillingdoDrop(ItemStack &, bool);
    virtual void FillinggetEmptySlotsCount(void)const;
}
