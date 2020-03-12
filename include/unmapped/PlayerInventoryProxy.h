#pragma once

#include "SemVersion.h"
#include "../bedrock/container/Inventory.h"
#include "../bedrock/level/Level.h"
#include <memory>
#include "ContainerSizeChangeListener.h"
#include "../bedrock/container/Container.h"
#include <functional>
#include "../bedrock/container/manager/HudContainerManagerModel.h"
#include "../bedrock/item/ItemStack.h"
#include "ContainerContentChangeListener.h"
#include "../bedrock/nbt/ListTag.h"
#include "../bedrock/item/unmapped/ItemDescriptor.h"


class PlayerInventoryProxy : ContainerSizeChangeListener, ContainerContentChangeListener {

public:
    class SlotData;

    virtual void containerSizeChanged(int);
    ~PlayerInventoryProxy();
    virtual void containerContentChanged(int);
    virtual void createTransactionContext(std::function<void (Container &, int, ItemStack const&, ItemStack const&)>, std::function<void (void)>);
    void removeResource(ItemStack const&);
//  void setItem(int, ItemStack const&, ContainerID); //TODO: incomplete function definition
//  void selectSlot(int, ContainerID); //TODO: incomplete function definition
    void swapSlots(int, int);
    bool hasResource(int);
//  void removeItem(int, int, ContainerID); //TODO: incomplete function definition
    void setContainerChanged(int);
    void load(ListTag const&, SemVersion const&, Level &);
    void getHotbarSize()const;
    bool canAdd(ItemStack const&)const;
    void getEmptySlotsCount()const;
//  void setContainerSize(int, ContainerID); //TODO: incomplete function definition
    void clearInventoryWithDefault(bool);
    void save();
    void getFirstEmptySlot()const;
//  void getContainerSize(ContainerID)const; //TODO: incomplete function definition
    void dropAll(bool);
//  void dropSlot(int, bool, bool, ContainerID, bool); //TODO: incomplete function definition
    void getSlotWithItem(ItemStack const&, bool, bool)const;
    void getSlots()const;
    void addListener(ContainerContentChangeListener *);
    void add(ItemStack &, bool);
//  void getSlotCopies(ContainerID)const; //TODO: incomplete function definition
    void getSelectedContainerId();
    void _getHudContainerManagerModel();
    void _getInventoryContainer();
    void init(std::weak_ptr<HudContainerManagerModel>);
//  void clearSlot(int, ContainerID); //TODO: incomplete function definition
    void getAllContainerIds();
//  void getItem(int, ContainerID)const; //TODO: incomplete function definition
    void clearInventory(int);
    void removeResource(int);
//  void setItemWithoutSlotLinking(int, ItemStack const&, ContainerID); //TODO: incomplete function definition
    void getAndRemoveResource(ItemStack &, bool, bool);
    void getSelectedItem();
    void removeListener(ContainerContentChangeListener *);
    void removeResource(ItemStack const&, bool, bool, int);
//  void getComplexItems(ContainerID)const; //TODO: incomplete function definition
    void setSelectedItem(ItemStack const&);
    void getSelectedSlot()const;
    void getItemCount(ItemDescriptor const&);
    void tick();
    PlayerInventoryProxy(std::unique_ptr<Inventory>);
    void _getHudContainer()const;
    class SlotData {

    public:
//      SlotData(int, ContainerID); //TODO: incomplete function definition
    };
};
