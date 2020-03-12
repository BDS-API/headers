#pragma once

#include "../item/ItemInstance.h"
#include "../item/unmapped/ItemDescriptor.h"
#include <string>
#include "../../unmapped/ContainerSizeChangeListener.h"
#include "../util/Vec3.h"
#include <functional>
#include "../nbt/CompoundTag.h"
#include "../block/unmapped/BlockSource.h"
#include "../../unmapped/ContainerContentChangeListener.h"
#include "../item/ItemStack.h"


class Container {

public:
    static std::string containerTypeMap;

    virtual bool hasRoomForItem(ItemStack const&);
    virtual void getItemCount(ItemDescriptor const&);
    virtual void createTransactionContext(std::function<void (Container &, int, ItemStack const&, ItemStack const&)>, std::function<void (void)>);
    virtual void removeContentChangeListener(ContainerContentChangeListener *);
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    ~Container();
    virtual void addItem(ItemStack &);
    virtual void setContainerChanged(int);
    virtual void addItemToFirstEmptySlot(ItemStack &);
    virtual void getSlotCopies()const;
    virtual void setCustomName(std::string const&);
    virtual bool hasCustomName()const;
    virtual void triggerTransactionChange(int, ItemStack const&, ItemStack const&);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getSlots()const;
    virtual void setContainerMoved();
    virtual void getItemCount(ItemStack const&);
    virtual void addContentChangeListener(ContainerContentChangeListener *);
    virtual void removeItem(int, int);
    virtual void dropContents(BlockSource &, Vec3 const&, bool);
    virtual void removeAllItems();
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void init();
    virtual void readAdditionalSaveData(CompoundTag const&);
    virtual void findFirstSlotForItem(ItemStack const&)const;
    void getContainerType();
//  std::string getContainerTypeName(ContainerType); //TODO: incomplete function definition
//  Container(ContainerType, std::string const&, bool); //TODO: incomplete function definition
    void setSizeChanged(int);
    void addSizeChangeListener(ContainerSizeChangeListener *);
    void getContainerTypeId(std::string const&);
    void removeSizeChangeListener(ContainerSizeChangeListener *);
    void getRedstoneSignalFromContainer();
//  Container(ContainerType); //TODO: incomplete function definition
};
