#pragma once

class SmokerContainerManagerModel : FurnaceContainerManagerModel {

    virtual void SmokerContainerManagerModel::~SmokerContainerManagerModel();
    virtual void SmokerContainerManagerModel::~SmokerContainerManagerModel();
    virtual void getContainerId(void)const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType(void)const;
    virtual void setContainerType(ContainerType);
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges(void);
    virtual void init(void);
    virtual void isValid(float);
}
