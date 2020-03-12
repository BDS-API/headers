#pragma once

#include <memory>
#include "ContainerContentChangeListener.h"
#include "ContainerSizeChangeListener.h"
#include <functional>


class PlayerInventoryProxy : ContainerSizeChangeListener, ContainerContentChangeListener {

public:
    class SlotData;

    virtual void createTransactionContext(std::function<void (Container &, int, ItemStack const&, ItemStack const&)>, std::function<void (void)>);
    virtual void containerContentChanged(int);
    virtual void containerSizeChanged(int);
    ~PlayerInventoryProxy();
    bool canAdd(ItemStack const&)const;
//  void dropSlot(int, bool, bool, ContainerID, bool); //TODO: incomplete function definition
//  void setItemWithoutSlotLinking(int, ItemStack const&, ContainerID); //TODO: incomplete function definition
    void setSelectedItem(ItemStack const&);
//  void getItem(int, ContainerID)const; //TODO: incomplete function definition
//  void selectSlot(int, ContainerID); //TODO: incomplete function definition
    void getSelectedContainerId();
    void _getHudContainerManagerModel();
    void getHotbarSize()const;
    void swapSlots(int, int);
    void getItemCount(ItemDescriptor const&);
    void getFirstEmptySlot()const;
    void getSelectedSlot()const;
    void clearInventory(int);
    void addListener(ContainerContentChangeListener *);
    void getAndRemoveResource(ItemStack &, bool, bool);
    void save();
    void add(ItemStack &, bool);
    void getSelectedItem();
    void init(std::weak_ptr<HudContainerManagerModel>);
    void getSlotWithItem(ItemStack const&, bool, bool)const;
    void removeResource(ItemStack const&, bool, bool, int);
//  void getSlotCopies(ContainerID)const; //TODO: incomplete function definition
    void setContainerChanged(int);
    void dropAll(bool);
    void _getInventoryContainer();
//  void clearSlot(int, ContainerID); //TODO: incomplete function definition
    void load(ListTag const&, SemVersion const&, Level &);
    void tick();
    void removeListener(ContainerContentChangeListener *);
//  void setContainerSize(int, ContainerID); //TODO: incomplete function definition
    void getAllContainerIds();
    void clearInventoryWithDefault(bool);
    PlayerInventoryProxy(std::unique_ptr<Inventory>);
    void removeResource(int);
//  void getContainerSize(ContainerID)const; //TODO: incomplete function definition
//  void setItem(int, ItemStack const&, ContainerID); //TODO: incomplete function definition
//  void removeItem(int, int, ContainerID); //TODO: incomplete function definition
//  void getComplexItems(ContainerID)const; //TODO: incomplete function definition
    bool hasResource(int);
    void getEmptySlotsCount()const;
    void getSlots()const;
    void _getHudContainer()const;
    void removeResource(ItemStack const&);
    class SlotData {

    public:
//      SlotData(int, ContainerID); //TODO: incomplete function definition
    };
};
