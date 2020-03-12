#pragma once

#include "LevelContainerManagerModel.h"


class HorseContainerManagerModel : LevelContainerManagerModel {

public:
    virtual void getSlot(int);
    ~HorseContainerManagerModel();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void init();
    void _onChestSlotChanged(int, ItemStack const&, ItemStack const&);
    void getEntity()const;
//  HorseContainerManagerModel(ContainerID, Player &, ActorUniqueID const&); //TODO: incomplete function definition
    void _onEquipSlotChanged(int, ItemStack const&, ItemStack const&);
};
