#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../actor/Player"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../item/ItemStack"


class HorseContainerManagerModel : LevelContainerManagerModel {

public:
    virtual HorseContainerManagerModel::~HorseContainerManagerModel()
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void init();

    HorseContainerManagerModel(ContainerID, Player &, ActorUniqueID const&);
    void getEntity()const;
    void _onEquipSlotChanged(int, ItemStack const&, ItemStack const&);
    void _onChestSlotChanged(int, ItemStack const&, ItemStack const&);
};
