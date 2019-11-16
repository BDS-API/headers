#pragma once

class CompoundCreatorContainerManagerModel : ContainerManagerModel {

    virtual void CompoundCreator~CompoundCreatorContainerManagerModel();
    virtual void CompoundCreator~CompoundCreatorContainerManagerModel();
    virtual void getContainerId(void)const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType(void)const;
    virtual void setContainerType(ContainerType);
    virtual void CompoundCreatorgetItems(void);
    virtual void CompoundCreatorsetSlot(int, ContainerItemStack const&, bool);
    virtual void CompoundCreatorgetSlot(int);
    virtual void CompoundCreatorsetData(int, int);
    virtual void CompoundCreatorbroadcastChanges(void);
    virtual void CompoundCreatorinit(void);
    virtual void CompoundCreatorisValid(float);
}
