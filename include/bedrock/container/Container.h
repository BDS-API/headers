#pragma once

#include "../block/unmapped/BlockSource"
#include "../nbt/CompoundTag"
#include "../../unmapped/ContainerSizeChangeListener"
#include "../../unmapped/ContainerContentChangeListener"
#include "../item/ItemInstance"
#include "../util/Vec3"
#include "../item/unmapped/ItemDescriptor"
#include "../item/ItemStack"


class Container {

public:
    static long containerTypeMap[abi:cxx11];

    virtual Container::~Container()
    virtual void init();
    virtual void addContentChangeListener(ContainerContentChangeListener *);
    virtual void removeContentChangeListener(ContainerContentChangeListener *);
    virtual bool hasRoomForItem(ItemStack const&);
    virtual void addItem(ItemStack &);
    virtual void addItemToFirstEmptySlot(ItemStack &);
    virtual void removeItem(int, int);
    virtual void removeAllItems();
    virtual void dropContents(BlockSource &, Vec3 const&, bool);
    virtual void getSlotCopies()const;
    virtual void getSlots()const;
    virtual void getItemCount(ItemDescriptor const&);
    virtual void getItemCount(ItemStack const&);
    virtual void findFirstSlotForItem(ItemStack const&)const;
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void setContainerChanged(int);
    virtual void setContainerMoved();
    virtual void setCustomName(std::string const&);
    virtual bool hasCustomName()const;
    virtual void readAdditionalSaveData(CompoundTag const&);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void createTransactionContext(std::function<void ()(Container&, int, ItemStack const&, ItemStack const&)>, std::function<void ()(void)>);
    virtual void triggerTransactionChange(int, ItemStack const&, ItemStack const&);

    Container(ContainerType);
    Container(ContainerType, std::string const&, bool);
    void addSizeChangeListener(ContainerSizeChangeListener *);
    void removeSizeChangeListener(ContainerSizeChangeListener *);
    void getContainerType();
    void getRedstoneSignalFromContainer();
    void setSizeChanged(int);
    void getContainerTypeId(std::string const&);
};
