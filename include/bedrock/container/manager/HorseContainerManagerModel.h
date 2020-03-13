#pragma once

#include "LevelContainerManagerModel.h"


class HorseContainerManagerModel : LevelContainerManagerModel {

public:
    ~HorseContainerManagerModel(); // _ZN26HorseContainerManagerModelD2Ev
    virtual void getItems(); // _ZN26HorseContainerManagerModel8getItemsEv
    virtual void setSlot(int, ContainerItemStack const&, bool); // _ZN26HorseContainerManagerModel7setSlotEiRK18ContainerItemStackb
    virtual void getSlot(int); // _ZN26HorseContainerManagerModel7getSlotEi
    virtual void init(); // _ZN26HorseContainerManagerModel4initEv
//  HorseContainerManagerModel(ContainerID, Player &, ActorUniqueID const&); //TODO: incomplete function definition // _ZN26HorseContainerManagerModelC2E11ContainerIDR6PlayerRK13ActorUniqueID
    void getEntity()const; // _ZNK26HorseContainerManagerModel9getEntityEv
    void _onEquipSlotChanged(int, ItemStack const&, ItemStack const&); // _ZN26HorseContainerManagerModel19_onEquipSlotChangedEiRK9ItemStackS2_
    void _onChestSlotChanged(int, ItemStack const&, ItemStack const&); // _ZN26HorseContainerManagerModel19_onChestSlotChangedEiRK9ItemStackS2_
};
