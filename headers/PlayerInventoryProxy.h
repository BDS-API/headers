#pragma once

class PlayerInventoryProxy : ContainerSizeChangeListener, ContainerContentChangeListener {

public:
    virtual void containerSizeChanged(int);
    virtual ~PlayerInventoryProxy();
    virtual void containerContentChanged(int);
    virtual void createTransactionContext(std::function<void ()(Container &, int, ItemStack const&, ItemStack const&)>, std::function<void ()(void)>);

    void PlayerInventoryProxy(std::unique_ptr<Inventory, std::default_delete<Inventory>>);
    void init(std::weak_ptr<HudContainerManagerModel>);
    void addListener(ContainerContentChangeListener *);
    void removeListener(ContainerContentChangeListener *);
    void setContainerChanged(int);
    void add(ItemStack &, bool);
    bool canAdd(ItemStack const&)const;
    void getSlotWithItem(ItemStack const&, bool, bool)const;
    void getFirstEmptySlot(void)const;
    void getEmptySlotsCount(void)const;
    void getSlots(void)const;
    void getComplexItems(ContainerID)const;
    void getSlotCopies(ContainerID)const;
    void _getHudContainer(void)const;
    void setContainerSize(int, ContainerID);
    void getContainerSize(ContainerID)const;
    void getHotbarSize(void)const;
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
    void save(void);
    void dropSlot(int, bool, bool, ContainerID, bool);
    void dropAll(bool);
    void tick(void);
    void setItem(int, ItemStack const&, ContainerID);
    void setItemWithoutSlotLinking(int, ItemStack const&, ContainerID);
    void getItem(int, ContainerID)const;
    void removeItem(int, int, ContainerID);
    void _getHudContainerManagerModel(void);
    void _getInventoryContainer(void);
    void getSelectedSlot(void)const;
    void getSelectedContainerId(void);
    void selectSlot(int, ContainerID);
    void getSelectedItem(void);
    void setSelectedItem(ItemStack const&);
    void getAllContainerIds(void);
};
