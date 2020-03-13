#pragma once

#include <memory>
#include <functional>
#include "ContainerSizeChangeListener.h"
#include "ContainerContentChangeListener.h"


class PlayerInventoryProxy : ContainerSizeChangeListener, ContainerContentChangeListener {

public:
    class SlotData;

    virtual void containerSizeChanged(int); // _ZN20PlayerInventoryProxy20containerSizeChangedEi
    ~PlayerInventoryProxy(); // _ZN20PlayerInventoryProxyD2Ev
    virtual void containerContentChanged(int); // _ZN20PlayerInventoryProxy23containerContentChangedEi
    virtual void createTransactionContext(std::function<void (Container &, int, ItemStack const&, ItemStack const&)>, std::function<void (void)>); // _ZN20PlayerInventoryProxy24createTransactionContextESt8functionIFvR9ContaineriRK9ItemStackS5_EES0_IFvvEE
    PlayerInventoryProxy(std::unique_ptr<Inventory>); // _ZN20PlayerInventoryProxyC2ESt10unique_ptrI9InventorySt14default_deleteIS1_EE
    void init(std::weak_ptr<HudContainerManagerModel>); // _ZN20PlayerInventoryProxy4initESt8weak_ptrI24HudContainerManagerModelE
    void addListener(ContainerContentChangeListener *); // _ZN20PlayerInventoryProxy11addListenerEP30ContainerContentChangeListener
    void removeListener(ContainerContentChangeListener *); // _ZN20PlayerInventoryProxy14removeListenerEP30ContainerContentChangeListener
    void setContainerChanged(int); // _ZN20PlayerInventoryProxy19setContainerChangedEi
    void add(ItemStack &, bool); // _ZN20PlayerInventoryProxy3addER9ItemStackb
    bool canAdd(ItemStack const&)const; // _ZNK20PlayerInventoryProxy6canAddERK9ItemStack
    void getSlotWithItem(ItemStack const&, bool, bool)const; // _ZNK20PlayerInventoryProxy15getSlotWithItemERK9ItemStackbb
    void getFirstEmptySlot()const; // _ZNK20PlayerInventoryProxy17getFirstEmptySlotEv
    void getEmptySlotsCount()const; // _ZNK20PlayerInventoryProxy18getEmptySlotsCountEv
    void getSlots()const; // _ZNK20PlayerInventoryProxy8getSlotsEv
//  void getComplexItems(ContainerID)const; //TODO: incomplete function definition // _ZNK20PlayerInventoryProxy15getComplexItemsE11ContainerID
//  void getSlotCopies(ContainerID)const; //TODO: incomplete function definition // _ZNK20PlayerInventoryProxy13getSlotCopiesE11ContainerID
    void _getHudContainer()const; // _ZNK20PlayerInventoryProxy16_getHudContainerEv
//  void setContainerSize(int, ContainerID); //TODO: incomplete function definition // _ZN20PlayerInventoryProxy16setContainerSizeEi11ContainerID
//  void getContainerSize(ContainerID)const; //TODO: incomplete function definition // _ZNK20PlayerInventoryProxy16getContainerSizeE11ContainerID
    void getHotbarSize()const; // _ZNK20PlayerInventoryProxy13getHotbarSizeEv
    void getItemCount(ItemDescriptor const&); // _ZN20PlayerInventoryProxy12getItemCountERK14ItemDescriptor
    bool hasResource(int); // _ZN20PlayerInventoryProxy11hasResourceEi
    void getAndRemoveResource(ItemStack &, bool, bool); // _ZN20PlayerInventoryProxy20getAndRemoveResourceER9ItemStackbb
    void removeResource(int); // _ZN20PlayerInventoryProxy14removeResourceEi
    void removeResource(ItemStack const&); // _ZN20PlayerInventoryProxy14removeResourceERK9ItemStack
    void removeResource(ItemStack const&, bool, bool, int); // _ZN20PlayerInventoryProxy14removeResourceERK9ItemStackbbi
    void swapSlots(int, int); // _ZN20PlayerInventoryProxy9swapSlotsEii
//  void clearSlot(int, ContainerID); //TODO: incomplete function definition // _ZN20PlayerInventoryProxy9clearSlotEi11ContainerID
    void clearInventory(int); // _ZN20PlayerInventoryProxy14clearInventoryEi
    void clearInventoryWithDefault(bool); // _ZN20PlayerInventoryProxy25clearInventoryWithDefaultEb
    void load(ListTag const&, SemVersion const&, Level &); // _ZN20PlayerInventoryProxy4loadERK7ListTagRK10SemVersionR5Level
    void save(); // _ZN20PlayerInventoryProxy4saveEv
//  void dropSlot(int, bool, bool, ContainerID, bool); //TODO: incomplete function definition // _ZN20PlayerInventoryProxy8dropSlotEibb11ContainerIDb
    void dropAll(bool); // _ZN20PlayerInventoryProxy7dropAllEb
    void tick(); // _ZN20PlayerInventoryProxy4tickEv
//  void setItem(int, ItemStack const&, ContainerID); //TODO: incomplete function definition // _ZN20PlayerInventoryProxy7setItemEiRK9ItemStack11ContainerID
//  void setItemWithoutSlotLinking(int, ItemStack const&, ContainerID); //TODO: incomplete function definition // _ZN20PlayerInventoryProxy25setItemWithoutSlotLinkingEiRK9ItemStack11ContainerID
//  void getItem(int, ContainerID)const; //TODO: incomplete function definition // _ZNK20PlayerInventoryProxy7getItemEi11ContainerID
//  void removeItem(int, int, ContainerID); //TODO: incomplete function definition // _ZN20PlayerInventoryProxy10removeItemEii11ContainerID
    void _getHudContainerManagerModel(); // _ZN20PlayerInventoryProxy28_getHudContainerManagerModelEv
    void _getInventoryContainer(); // _ZN20PlayerInventoryProxy22_getInventoryContainerEv
    void getSelectedSlot()const; // _ZNK20PlayerInventoryProxy15getSelectedSlotEv
    void getSelectedContainerId(); // _ZN20PlayerInventoryProxy22getSelectedContainerIdEv
//  void selectSlot(int, ContainerID); //TODO: incomplete function definition // _ZN20PlayerInventoryProxy10selectSlotEi11ContainerID
    void getSelectedItem(); // _ZN20PlayerInventoryProxy15getSelectedItemEv
    void setSelectedItem(ItemStack const&); // _ZN20PlayerInventoryProxy15setSelectedItemERK9ItemStack
    void getAllContainerIds(); // _ZN20PlayerInventoryProxy18getAllContainerIdsEv
    class SlotData {

    public:
//      SlotData(int, ContainerID); //TODO: incomplete function definition // _ZN20PlayerInventoryProxy8SlotDataC2Ei11ContainerID
    };
};
