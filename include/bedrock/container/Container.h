#pragma once

#include "../../unmapped/BlockSource"
#include "../../unmapped/ContainerContentChangeListener"
#include "../item/ItemStack"
#include "../../unmapped/ContainerSizeChangeListener"
#include "../nbt/CompoundTag"
#include "../../unmapped/ItemDescriptor"


class Container {

public:
    static long containerTypeMap[abi:cxx11];

    virtual Container::~Container();
    virtual void init(void);
    virtual void addContentChangeListener(ContainerContentChangeListener *);
    virtual void removeContentChangeListener(ContainerContentChangeListener *);
    virtual bool hasRoomForItem(ItemStack const&);
    virtual void addItem(ItemStack &);
    virtual void addItemToFirstEmptySlot(ItemStack &);
    virtual void removeItem(int, int);
    virtual void removeAllItems(void);
    virtual void dropContents(BlockSource &, Vec3 const&, bool);
    virtual void getSlotCopies(void)const;
    virtual void getSlots(void)const;
    virtual void getItemCount(ItemDescriptor const&);
    virtual void getItemCount(ItemStack const&);
    virtual void findFirstSlotForItem(ItemStack const&)const;
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void setContainerChanged(int);
    virtual void setContainerMoved(void);
    virtual void setCustomName(std::string const&);
    virtual bool hasCustomName(void)const;
    virtual void readAdditionalSaveData(CompoundTag const&);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void createTransactionContext(std::function<void ()(Container&, int, ItemStack const&, ItemStack const&)>, std::function<void ()(void)>);
    virtual void triggerTransactionChange(int, ItemStack const&, ItemStack const&);

    Container(ContainerType);
    Container(ContainerType, std::string const&, bool);
    void addSizeChangeListener(ContainerSizeChangeListener *);
    void removeSizeChangeListener(ContainerSizeChangeListener *);
    void getContainerType(void);
    void getRedstoneSignalFromContainer(void);
    void setSizeChanged(int);
    void getContainerTypeId(std::string const&);
};
