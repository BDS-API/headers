#pragma once

#include "../../item/ItemStack.h"
#include <string>
#include "../Player.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../block/unmapped/BlockSource.h"
#include "../Actor.h"
#include "../../util/Vec3.h"
#include "../../description/component/ContainerDescription.h"
#include "../../../unmapped/ContainerContentChangeListener.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "IEntityComponent.h"
#include "../ItemActor.h"


class ContainerComponent : ContainerContentChangeListener, IEntityComponent {

public:
    ~ContainerComponent();
    virtual void containerContentChanged(int);
    void setCustomName(std::string const&);
    void openContainer(Actor &, Player &);
    ContainerComponent();
    void addAdditionalSaveData(CompoundTag &);
    bool hasRoomForItem(ItemStack const&);
//  void rebuildContainer(Actor &, ContainerType, int, bool, int, bool); //TODO: incomplete function definition
    void setLootTable(std::string, int);
    void findFirstSlotForItem(ItemStack const&)const;
    bool isPrivate()const;
    void initFromDefinition(Actor &);
    void _unpackLootTable(Level &);
    void removeItem(int, int);
    ContainerComponent(ContainerComponent &&);
    void removeItemsOfType(ItemStack const&, int);
    void dropContents(BlockSource &, Vec3 const&, bool);
    void _getRawContainerPtr()const;
    void initFromDefinition(Actor &, ContainerDescription const&);
    void countItemsOfType(ItemStack const&)const;
    void addItem(ItemStack &);
    void getSlots()const;
    void addItem(BlockSource &, ItemStack &, int, int);
    void addItem(ItemActor &);
    bool canBeSiphonedFrom()const;
    bool hasRoomForItem(ItemActor const&);
    void setItem(int, ItemStack const&);
    bool canOpenContainer(Actor const&, Player &)const;
    bool hasCustomName()const;
    void getContainerType()const;
    void _tryMoveInItem(BlockSource &, ItemStack &, int, int, int);
    void getItem(int)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getContainerSize()const;
};
