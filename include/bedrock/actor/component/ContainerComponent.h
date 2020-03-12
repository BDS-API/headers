#pragma once

#include "IEntityComponent.h"
#include <string>
#include "../../../unmapped/ContainerContentChangeListener.h"


class ContainerComponent : ContainerContentChangeListener, IEntityComponent {

public:
    ~ContainerComponent();
    virtual void containerContentChanged(int);
    void getSlots()const;
    void findFirstSlotForItem(ItemStack const&)const;
    void _getRawContainerPtr()const;
    bool hasRoomForItem(ItemStack const&);
    void addItem(BlockSource &, ItemStack &, int, int);
//  void rebuildContainer(Actor &, ContainerType, int, bool, int, bool); //TODO: incomplete function definition
    void addAdditionalSaveData(CompoundTag &);
    bool hasRoomForItem(ItemActor const&);
    void getContainerSize()const;
    void removeItemsOfType(ItemStack const&, int);
    void countItemsOfType(ItemStack const&)const;
    void getItem(int)const;
    ContainerComponent();
    void addItem(ItemStack &);
    void getContainerType()const;
    void dropContents(BlockSource &, Vec3 const&, bool);
    bool canBeSiphonedFrom()const;
    void setLootTable(std::string, int);
    void removeItem(int, int);
    bool canOpenContainer(Actor const&, Player &)const;
    void setCustomName(std::string const&);
    ContainerComponent(ContainerComponent &&);
    void _unpackLootTable(Level &);
    void initFromDefinition(Actor &, ContainerDescription const&);
    bool hasCustomName()const;
    void initFromDefinition(Actor &);
    void _tryMoveInItem(BlockSource &, ItemStack &, int, int, int);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void addItem(ItemActor &);
    void setItem(int, ItemStack const&);
    bool isPrivate()const;
    void openContainer(Actor &, Player &);
};
