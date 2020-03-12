#pragma once

#include "ContainerManagerModel.h"


class HudContainerManagerModel : ContainerManagerModel {

public:
    virtual void init();
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void getSlot(int);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    ~HudContainerManagerModel();
    virtual void getItems();
//  HudContainerManagerModel(ContainerID, Player &); //TODO: incomplete function definition
    void refreshHotbar();
    void getHotbarItems();
};
