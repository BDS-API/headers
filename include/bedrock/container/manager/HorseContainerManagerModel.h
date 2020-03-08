#pragma once

#include "../../item/ItemStack"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../../unmapped/ContainerItemStack"
#include "../../actor/Player"


class HorseContainerManagerModel : LevelContainerManagerModel {

public:
    HorseContainerManagerModel::~HorseContainerManagerModel()
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void init();

    HorseContainerManagerModel(ContainerID, Player &, ActorUniqueID const&);
    void getEntity()const;
    void _onEquipSlotChanged(int, ItemStack const&, ItemStack const&);
    void _onChestSlotChanged(int, ItemStack const&, ItemStack const&);
};
