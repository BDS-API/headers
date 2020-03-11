#pragma once

#include "../block/unmapped/BlockSource.h"
#include "./Container.h"
#include "../item/unmapped/ItemDescriptor.h"
#include "../item/ItemStack.h"
#include "../../unmapped/ContainerSizeChangeListener.h"
#include "../../unmapped/ContainerContentChangeListener.h"
#include "../util/Vec3.h"
#include "../item/ItemInstance.h"
#include <functional>
#include "../nbt/CompoundTag.h"
#include <string>


class Container {

public:
    static std::string containerTypeMap;

    virtual ~Container();
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
//  virtual void createTransactionContext(std::function<void (Container &, int, ItemStack const&, ItemStack const&)>, std::function<void (void)>); //TODO: incomplete function definition
    virtual void triggerTransactionChange(int, ItemStack const&, ItemStack const&);

//  Container(ContainerType); //TODO: incomplete function definition
//  Container(ContainerType, std::string const&, bool); //TODO: incomplete function definition
    void addSizeChangeListener(ContainerSizeChangeListener *);
    void removeSizeChangeListener(ContainerSizeChangeListener *);
    void getContainerType();
    void getRedstoneSignalFromContainer();
    void setSizeChanged(int);
//  std::string getContainerTypeName(ContainerType); //TODO: incomplete function definition
    void getContainerTypeId(std::string const&);
};
