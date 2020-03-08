#pragma once

#include "../../item/ItemStack"
#include "../../level/Level"
#include "../Actor"
#include "../../../unmapped/DataLoadHelper"
#include "../../description/component/ContainerDescription"
#include "../ItemActor"
#include "../../util/Vec3"
#include "../../../unmapped/ContainerContentChangeListener"
#include "../../block/unmapped/BlockSource"
#include "../Player"
#include "../../nbt/CompoundTag"


class ContainerComponent : ContainerContentChangeListener, IEntityComponent {

public:
    virtual void containerContentChanged(int);
    ContainerComponent::~ContainerComponent()

    ContainerComponent(void);
    ContainerComponent(ContainerComponent&&);
    void _getRawContainerPtr()const;
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, ContainerDescription const&);
    void rebuildContainer(Actor &, ContainerType, int, bool, int, bool);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    bool canOpenContainer(Actor const&, Player &)const;
    void openContainer(Actor &, Player &);
    void _unpackLootTable(Level &);
    bool canBeSiphonedFrom()const;
    bool isPrivate()const;
    void setCustomName(std::string const&);
    bool hasCustomName()const;
    void getContainerType()const;
    void getContainerSize()const;
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
    void getSlots()const;
    void removeItemsOfType(ItemStack const&, int);
    void findFirstSlotForItem(ItemStack const&)const;
    void dropContents(BlockSource &, Vec3 const&, bool);
    void setLootTable(std::string, int);
};
