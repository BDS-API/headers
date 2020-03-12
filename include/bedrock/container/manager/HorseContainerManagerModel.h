#pragma once

#include "../../item/ItemStack.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "LevelContainerManagerModel.h"
#include "../../actor/Player.h"


class HorseContainerManagerModel : LevelContainerManagerModel {

public:
    virtual void getSlot(int);
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    ~HorseContainerManagerModel();
    virtual void init();
    void _onEquipSlotChanged(int, ItemStack const&, ItemStack const&);
//  HorseContainerManagerModel(ContainerID, Player &, ActorUniqueID const&); //TODO: incomplete function definition
    void getEntity()const;
    void _onChestSlotChanged(int, ItemStack const&, ItemStack const&);
};
