#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../actor/Player"


class HudContainerManagerModel : ContainerManagerModel {

public:
    virtual HudContainerManagerModel::~HudContainerManagerModel()
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();

    HudContainerManagerModel(ContainerID, Player &);
    void refreshHotbar();
    void getHotbarItems();
};
