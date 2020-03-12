#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include "../../actor/Player.h"
#include "ContainerManagerModel.h"


class HudContainerManagerModel : ContainerManagerModel {

public:
    virtual void getItems();
    ~HudContainerManagerModel();
    virtual void init();
    virtual void broadcastChanges();
    virtual void getSlot(int);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void setData(int, int);
    void getHotbarItems();
    void refreshHotbar();
//  HudContainerManagerModel(ContainerID, Player &); //TODO: incomplete function definition
};
