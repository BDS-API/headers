#pragma once

class PlayerUIContainer : SimpleContainer {

    virtual void ~PlayerUIContainer();
    virtual void ~PlayerUIContainer();
    virtual void Container::init(void);
    virtual void Container::addContentChangeListener(ContainerContentChangeListener *);
    virtual void Container::removeContentChangeListener(ContainerContentChangeListener *);
    virtual void getItem(int)const;
    virtual void Container::hasRoomForItem(ItemStack const&);
    virtual void Container::addItem(ItemStack &);
    virtual void Container::addItemToFirstEmptySlot(ItemStack &);
    virtual void setItem(int, ItemStack const&);
    virtual void Container::removeItem(int, int);
    virtual void Container::removeAllItems(void);
    virtual void Container::dropContents(BlockSource &, Vec3 const&, bool);
    virtual void getContainerSize(void)const;
    virtual void getMaxStackSize(void)const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);
    virtual void Container::getSlotCopies(void)const;
    virtual void Container::getSlots(void)const;
    virtual void Container::getItemCount(ItemDescriptor const&);
    virtual void Container::getItemCount(ItemStack const&);
    virtual void Container::findFirstSlotForItem(ItemStack const&)const;
    virtual void Container::canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void Container::canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void Container::setContainerChanged(int);
    virtual void Container::setContainerMoved(void);
    virtual void Container::setCustomName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void Container::hasCustomName(void)const;
    virtual void Container::readAdditionalSaveData(CompoundTag const&);
    virtual void Container::addAdditionalSaveData(CompoundTag &);
    virtual void Container::createTransactionContext(std::function<void ()(Container&, int, ItemStack const&, ItemStack const&)>, std::function<void ()(void)>);
    virtual void Container::triggerTransactionChange(int, ItemStack const&, ItemStack const&);
}
