#pragma once

#include "../bedrock/item/unmapped/ItemDescriptor"
#include "../bedrock/level/Level"
#include "../bedrock/nbt/ListTag"
#include "../bedrock/container/Inventory"
#include "../bedrock/item/ItemStack"
#include "../bedrock/container/manager/HudContainerManagerModel"


class PlayerInventoryProxy : ContainerSizeChangeListener, ContainerContentChangeListener {

public:
    virtual void containerSizeChanged(int);
    virtual PlayerInventoryProxy::~PlayerInventoryProxy()
    virtual void containerContentChanged(int);
    virtual void createTransactionContext(std::function<void ()(Container &, int, ItemStack const&, ItemStack const&)>, std::function<void ()(void)>);

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
    void getComplexItems(ContainerID)const;
    void getSlotCopies(ContainerID)const;
    void _getHudContainer()const;
    void setContainerSize(int, ContainerID);
    void getContainerSize(ContainerID)const;
    void getHotbarSize()const;
    void getItemCount(ItemDescriptor const&);
    bool hasResource(int);
    void getAndRemoveResource(ItemStack &, bool, bool);
    void removeResource(int);
    void removeResource(ItemStack const&);
    void removeResource(ItemStack const&, bool, bool, int);
    void swapSlots(int, int);
    void clearSlot(int, ContainerID);
    void clearInventory(int);
    void clearInventoryWithDefault(bool);
    void load(ListTag const&, SemVersion const&, Level &);
    void save();
    void dropSlot(int, bool, bool, ContainerID, bool);
    void dropAll(bool);
    void tick();
    void setItem(int, ItemStack const&, ContainerID);
    void setItemWithoutSlotLinking(int, ItemStack const&, ContainerID);
    void getItem(int, ContainerID)const;
    void removeItem(int, int, ContainerID);
    void _getHudContainerManagerModel();
    void _getInventoryContainer();
    void getSelectedSlot()const;
    void getSelectedContainerId();
    void selectSlot(int, ContainerID);
    void getSelectedItem();
    void setSelectedItem(ItemStack const&);
    void getAllContainerIds();
};
