#pragma once

class ContainerComponent : ContainerContentChangeListener, IEntityComponent {

public:
    virtual void containerContentChanged(int);
    virtual ~ContainerComponent();

    void ContainerComponent(void);
    void ContainerComponent(ContainerComponent&&);
    void _getRawContainerPtr(void)const;
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, ContainerDescription const&);
    void rebuildContainer(Actor &, ContainerType, int, bool, int, bool);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    bool canOpenContainer(Actor const&, Player &)const;
    void openContainer(Actor &, Player &);
    void _unpackLootTable(Level &);
    bool canBeSiphonedFrom(void)const;
    bool isPrivate(void)const;
    void setCustomName(std::string const&);
    bool hasCustomName(void)const;
    void getContainerType(void)const;
    void getContainerSize(void)const;
    void _tryMoveInItem(BlockSource &, ItemStack &, int, int, int);
    bool hasRoomForItem(ItemActor const&);
    bool hasRoomForItem(ItemStack const&);
    void addItem(ItemStack &);
    void addItem(ItemActor &);
    void addItem(BlockSource &, ItemStack &, int, int);
    void setItem(int, ItemStack const&);
    void getItem(int)const;
    void removeItem(int, int);
    void countItemsOfType(ItemStack const&)const;
    void getSlots(void)const;
    void removeItemsOfType(ItemStack const&, int);
    void findFirstSlotForItem(ItemStack const&)const;
    void dropContents(BlockSource &, Vec3 const&, bool);
    void setLootTable(std::string, int);
};
