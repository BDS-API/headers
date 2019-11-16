#pragma once

class AnvilContainerManagerModel : ContainerManagerModel {

    virtual void Anvil~AnvilContainerManagerModel();
    virtual void Anvil~AnvilContainerManagerModel();
    virtual void getContainerId(void)const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType(void)const;
    virtual void setContainerType(ContainerType);
    virtual void AnvilgetItems(void);
    virtual void AnvilsetSlot(int, ContainerItemStack const&, bool);
    virtual void AnvilgetSlot(int);
    virtual void AnvilsetData(int, int);
    virtual void AnvilbroadcastChanges(void);
    virtual void Anvilinit(void);
    virtual void isValid(float);
}
