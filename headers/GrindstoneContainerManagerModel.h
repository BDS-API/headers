#pragma once

class GrindstoneContainerManagerModel : ContainerManagerModel {

    virtual void Grindstone~GrindstoneContainerManagerModel();
    virtual void Grindstone~GrindstoneContainerManagerModel();
    virtual void getContainerId(void)const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType(void)const;
    virtual void setContainerType(ContainerType);
    virtual void GrindstonegetItems(void);
    virtual void GrindstonesetSlot(int, ContainerItemStack const&, bool);
    virtual void GrindstonegetSlot(int);
    virtual void GrindstonesetData(int, int);
    virtual void GrindstonebroadcastChanges(void);
    virtual void Grindstoneinit(void);
    virtual void isValid(float);
}
