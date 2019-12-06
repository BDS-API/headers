#pragma once

class HudContainerManagerModel : ContainerManagerModel {

public:
    virtual ~HudContainerManagerModel();
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges(void);
    virtual void init(void);

    void HudContainerManagerModel(ContainerID, Player &);
    void refreshHotbar(void);
    void getHotbarItems(void);
};
