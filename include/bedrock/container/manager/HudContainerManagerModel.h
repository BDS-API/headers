#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include "./ContainerManagerModel.h"
#include "../../actor/Player.h"


class HudContainerManagerModel : ContainerManagerModel {

public:
    virtual ~HudContainerManagerModel();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();

//  HudContainerManagerModel(ContainerID, Player &); //TODO: incomplete function definition
    void refreshHotbar();
    void getHotbarItems();
};
