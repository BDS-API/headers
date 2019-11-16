#pragma once

class HudContainerManagerModel : ContainerManagerModel {

    virtual void Hud~HudContainerManagerModel();
    virtual void Hud~HudContainerManagerModel();
    virtual void getContainerId(void)const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType(void)const;
    virtual void setContainerType(ContainerType);
    virtual void HudgetItems(void);
    virtual void HudsetSlot(int, ContainerItemStack const&, bool);
    virtual void HudgetSlot(int);
    virtual void HudsetData(int, int);
    virtual void HudbroadcastChanges(void);
    virtual void Hudinit(void);
    virtual void isValid(float);
}
