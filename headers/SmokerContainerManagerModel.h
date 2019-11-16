#pragma once

class SmokerContainerManagerModel : FurnaceContainerManagerModel {

    virtual void ~SmokerContainerManagerModel();
    virtual void ~SmokerContainerManagerModel();
    virtual void ContainerManagerModel::getContainerId(void)const;
    virtual void ContainerManagerModel::setContainerId(ContainerID);
    virtual void ContainerManagerModel::getContainerType(void)const;
    virtual void ContainerManagerModel::setContainerType(ContainerType);
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges(void);
    virtual void init(void);
    virtual void ContainerManagerModel::isValid(float);
}
