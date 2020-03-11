#pragma once

#include "./SemVersion.h"
#include "./ContainerContentChangeListener.h"
#include <memory>
#include "../bedrock/nbt/ListTag.h"
#include "../bedrock/item/unmapped/ItemDescriptor.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/container/Container.h"
#include "../bedrock/level/Level.h"
#include "./ContainerSizeChangeListener.h"
#include "../bedrock/container/Inventory.h"
#include <functional>
#include "../bedrock/container/manager/HudContainerManagerModel.h"


class PlayerInventoryProxy : ContainerSizeChangeListener, ContainerContentChangeListener {

public:
    virtual void containerSizeChanged(int);
    virtual ~PlayerInventoryProxy();
    virtual void containerContentChanged(int);
//  virtual void createTransactionContext(std::function<void (Container &, int, ItemStack const&, ItemStack const&)>, std::function<void (void)>); //TODO: incomplete function definition

    PlayerInventoryProxy(std::unique_ptr<Inventory, std::default_delete<Inventory>>);
    void init(std::weak_ptr<HudContainerManagerModel>);
    void addListener(ContainerContentChangeListener *);
    void removeListener(ContainerContentChangeListener *);
    void setContainerChanged(int);
    void add(ItemStack &, bool);
    bool canAdd(ItemStack const&)const;
    void getSlotWithItem(ItemStack const&, bool, bool)const;
    void getFirstEmptySlot()const;
    void getEmptySlotsCount()const;
    void getSlots()const;
//  void getComplexItems(ContainerID)const; //TODO: incomplete function definition
//  void getSlotCopies(ContainerID)const; //TODO: incomplete function definition
    void _getHudContainer()const;
//  void setContainerSize(int, ContainerID); //TODO: incomplete function definition
//  void getContainerSize(ContainerID)const; //TODO: incomplete function definition
    void getHotbarSize()const;
    void getItemCount(ItemDescriptor const&);
    bool hasResource(int);
    void getAndRemoveResource(ItemStack &, bool, bool);
    void removeResource(int);
    void removeResource(ItemStack const&);
    void removeResource(ItemStack const&, bool, bool, int);
    void swapSlots(int, int);
//  void clearSlot(int, ContainerID); //TODO: incomplete function definition
    void clearInventory(int);
    void clearInventoryWithDefault(bool);
    void load(ListTag const&, SemVersion const&, Level &);
    void save();
//  void dropSlot(int, bool, bool, ContainerID, bool); //TODO: incomplete function definition
    void dropAll(bool);
    void tick();
//  void setItem(int, ItemStack const&, ContainerID); //TODO: incomplete function definition
//  void setItemWithoutSlotLinking(int, ItemStack const&, ContainerID); //TODO: incomplete function definition
//  void getItem(int, ContainerID)const; //TODO: incomplete function definition
//  void removeItem(int, int, ContainerID); //TODO: incomplete function definition
    void _getHudContainerManagerModel();
    void _getInventoryContainer();
    void getSelectedSlot()const;
    void getSelectedContainerId();
//  void selectSlot(int, ContainerID); //TODO: incomplete function definition
    void getSelectedItem();
    void setSelectedItem(ItemStack const&);
    void getAllContainerIds();
};
