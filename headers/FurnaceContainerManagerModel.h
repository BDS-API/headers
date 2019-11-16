#pragma once

class FurnaceContainerManagerModel : ContainerManagerModel {

    virtual void Furnace~FurnaceContainerManagerModel();
    virtual void Furnace~FurnaceContainerManagerModel();
    virtual void getContainerId(void)const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType(void)const;
    virtual void setContainerType(ContainerType);
    virtual void FurnacegetItems(void);
    virtual void FurnacesetSlot(int, ContainerItemStack const&, bool);
    virtual void FurnacegetSlot(int);
    virtual void FurnacesetData(int, int);
    virtual void FurnacebroadcastChanges(void);
    virtual void Furnaceinit(void);
    virtual void isValid(float);
}
