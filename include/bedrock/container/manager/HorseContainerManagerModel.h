#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include "./LevelContainerManagerModel.h"
#include "../../item/ItemStack.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../actor/Player.h"


class HorseContainerManagerModel : LevelContainerManagerModel {

public:
    virtual ~HorseContainerManagerModel();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void init();

//  HorseContainerManagerModel(ContainerID, Player &, ActorUniqueID const&); //TODO: incomplete function definition
    void getEntity()const;
    void _onEquipSlotChanged(int, ItemStack const&, ItemStack const&);
    void _onChestSlotChanged(int, ItemStack const&, ItemStack const&);
};
