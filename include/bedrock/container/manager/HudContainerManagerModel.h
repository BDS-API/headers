#pragma once

#include "ContainerManagerModel.h"


class HudContainerManagerModel : ContainerManagerModel {

public:
    ~HudContainerManagerModel(); // _ZN24HudContainerManagerModelD2Ev
    virtual void getItems(); // _ZN24HudContainerManagerModel8getItemsEv
    virtual void setSlot(int, ContainerItemStack const&, bool); // _ZN24HudContainerManagerModel7setSlotEiRK18ContainerItemStackb
    virtual void getSlot(int); // _ZN24HudContainerManagerModel7getSlotEi
    virtual void setData(int, int); // _ZN24HudContainerManagerModel7setDataEii
    virtual void broadcastChanges(); // _ZN24HudContainerManagerModel16broadcastChangesEv
    virtual void init(); // _ZN24HudContainerManagerModel4initEv
//  HudContainerManagerModel(ContainerID, Player &); //TODO: incomplete function definition // _ZN24HudContainerManagerModelC2E11ContainerIDR6Player
    void refreshHotbar(); // _ZN24HudContainerManagerModel13refreshHotbarEv
    void getHotbarItems(); // _ZN24HudContainerManagerModel14getHotbarItemsEv
};
