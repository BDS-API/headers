#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../actor/Player"


class HudContainerManagerModel : ContainerManagerModel {

public:
    virtual HudContainerManagerModel::~HudContainerManagerModel();
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges(void);
    virtual void init(void);

    HudContainerManagerModel(ContainerID, Player &);
    void refreshHotbar(void);
    void getHotbarItems(void);
};
